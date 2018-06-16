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
namespace CompoundTypes {

CompoundType::CompoundType(res_words req,
		res_words opt) : Type(req) {
	words.insert(words.end(),opt);

	contents_type = nullptr;
}

CompoundType::CompoundType(INIT_LIST<std::string> nm) : Type(nm) {

	contents_type = nullptr;
}

CompoundType::~CompoundType() {

}

const CompoundType CompoundType::T_Enum =
		CompoundType({&ReservedTypeWord::R_enum});

#ifdef CPP_SUPPORT_SCOPED_ENUM
const CompoundType CompoundType::T_ScopedEnum =
		CompoundType({&ReservedTypeWord::R_enum},{&ReservedTypeWord::R_class,&ReservedTypeWord::R_struct});
#endif

} /* namespace CompoundTypes */
} /* namespace Types */
} /* namespace Cpp */
