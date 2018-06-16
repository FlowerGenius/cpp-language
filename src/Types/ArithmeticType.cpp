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


std::list<const ArithmeticType*> ArithmeticType::all_arithmetic_types;

#if REQUIRES_NOARG_CONSTRUCTOR
ArithmeticType::ArithmeticType() : FundamentalType() {

}
#endif

ArithmeticType::ArithmeticType(res_words req,
		res_words opt) :
				FundamentalType(req,opt) {
	all_arithmetic_types.push_back(this);
}

ArithmeticType::~ArithmeticType() {
	all_arithmetic_types.remove(this);
}

} /* namespace ArithmeticTypes */
} /* namespace FundamentalTypes */
} /* namespace Types */
} /* namespace Cpp */
