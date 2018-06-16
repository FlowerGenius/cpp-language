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
namespace FloatingPointTypes {

std::list<const FloatingPointType*> FloatingPointType::all_floating_point_types;

#if REQUIRES_NOARG_CONSTRUCTOR
FloatingPointType::FloatingPointType() : ArithmeticType() {

}

#endif

FloatingPointType::FloatingPointType(res_words req,
		res_words opt) :
		ArithmeticType(req,opt) {
	all_floating_point_types.push_back(this);
}

FloatingPointType::~FloatingPointType() {
	all_floating_point_types.remove(this);
}

const FloatingPointType FloatingPointType::Float =
		FloatingPointType({&ReservedTypeWord::R_float});

const FloatingPointType FloatingPointType::Double =
		FloatingPointType({&ReservedTypeWord::R_double});

#ifdef CPP_SUPPORT_LONG_DOUBLE
const FloatingPointType FloatingPointType::LongDouble =
		FloatingPointType({&ReservedTypeWord::R_long,&ReservedTypeWord::R_double});
#endif

#ifdef CPP_SUPPORT_LONGLONG_DOUBLE
const FloatingPointType FloatingPointType::LongLongDouble =
		FloatingPointType({&R_long,&R_long,
	&R_double});
#endif

} /* namespace FloatingPointTypes */
} /* namespace ArithmeticTypes */
} /* namespace FundamentalTypes */
} /* namespace Types */
} /* namespace Cpp */
