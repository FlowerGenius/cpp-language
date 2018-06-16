//SHEILa========================================================================
// Name        : Type.cpp
// Author      : FlowerGenius<justanortherngirl58@gmail.com>
// Version     :
// Copyright   :
// Description :
// Module      : SHEILa
// Created     : Apr 4, 2018
// Modified    :
//==============================================================================

#include "CppLanguage.hpp"

namespace Cpp {
namespace Types {

using namespace LexicalElements::ReservedWords;

std::map<Scopes::Scope*,std::list<Type*> > Type::all_types;

#if REQUIRES_NOARG_CONSTRUCTOR
Type::Type() {
	rwords = false;
	this->words = {};
	this->myscope = &Scopes::Scope::global_scope;
}
#endif

Type::Type(INIT_LIST<std::string> nm, Scopes::Scope *scop) {
	this->type_name = nm;
	rwords = false;
	if (scop != nullptr) {
		myscope = scop;
	} else { myscope = &Scopes::Scope::global_scope; }
	all_types[myscope].push_back(this);
}

Type::Type(res_words nm) {
	this->words = nm;
	rwords = true;
	myscope = &Scopes::Scope::global_scope;
	all_types[myscope].push_back(this);
}

Type::~Type() {
	all_types[myscope].remove(this);
}

const Type Type::Type_name = Type({&ReservedTypeWord::R_typename});

} /* namespace Types */
} /* namespace Cpp */

