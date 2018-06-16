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
namespace FundamentalTypes {

using namespace LexicalElements::ReservedWords;

std::list<const FundamentalType*> FundamentalType::all_fundamental_types;

#if REQUIRES_NOARG_CONSTRUCTOR
FundamentalType::FundamentalType() : Type() {

}
#endif

FundamentalType::FundamentalType(res_words req,
		res_words opt) : Type(req){

	words.insert(words.end(), opt);
	all_fundamental_types.push_back(this);
}

FundamentalType::~FundamentalType() {
	all_fundamental_types.remove(this);
}

const FundamentalType FundamentalType::Void =
		FundamentalType({&ReservedTypeWord::R_void});

} /* namespace FundamentalTypes */
} /* namespace Types */
} /* namespace Cpp */
