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
namespace ArithmeticTypes {
namespace IntegralTypes {
namespace CharacterTypes {

std::list<const CharacterType*> CharacterType::all_character_types;

#if REQUIRES_NOARG_CONSTRUCTOR
CharacterType::CharacterType() : IntegralType() {

}
#endif

CharacterType::CharacterType(res_words req,
		res_words opt,bool sgn) :
				IntegralType(req,opt,sgn) {
	all_character_types.push_back(this);
}

CharacterType::~CharacterType() {
	all_character_types.remove(this);
}

const CharacterType CharacterType::Char =
		CharacterType({&ReservedTypeWord::R_char},{&ReservedTypeWord::R_signed});

#ifdef CPP_SUPPORT_WIDE_CHAR
const CharacterType CharacterType::WideChar =
		CharacterType({&R_wchar_t},{&R_signed});
#endif

const CharacterType CharacterType::UnsignedChar =
		CharacterType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_char},res_words({}),false);

#ifdef CPP_SUPPORT_WIDE_CHAR
const CharacterType CharacterType::UnsignedWideChar =
		CharacterType({&R_unsigned,&R_wchar_t},{},false);
#endif

} /* namespace CharacterTypes */
} /* namespace IntegralTypes */
} /* namespace ArithmeticTypes */
} /* namespace FundamentalTypes */
} /* namespace Types */
} /* namespace Cpp */
