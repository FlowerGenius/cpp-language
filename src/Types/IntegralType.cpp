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

std::list<const IntegralType*> IntegralType::all_integral_types;

#if REQUIRES_NOARG_CONSTRUCTOR
IntegralType::IntegralType() : ArithmeticType() {
	_signed_ = true;
}
#endif

IntegralType::IntegralType(res_words req,
		res_words opt, bool sgn) :
				ArithmeticType(req,opt), _signed_(sgn) {
	all_integral_types.push_back(this);
}

IntegralType::~IntegralType() {
	all_integral_types.remove(this);
}

const IntegralType IntegralType::Boolean =
		IntegralType({&ReservedTypeWord::R_bool});

} /* namespace IntegralTypes */
} /* namespace ArithmeticTypes */
} /* namespace FundamentalTypes */
} /* namespace Types */
} /* namespace Cpp */
