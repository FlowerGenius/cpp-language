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
namespace IntegerTypes { /*===================================================*/

std::list<const IntegerType*> IntegerType::all_integer_types;

#if REQUIRES_NOARG_CONSTRUCTOR
IntegerType::IntegerType() : IntegralType() {

}
#endif

IntegerType::IntegerType(res_words req,
		res_words opt, bool sgn) :
				IntegralType(req,opt,sgn) {
	all_integer_types.push_back(this);
}

IntegerType::~IntegerType() {
	all_integer_types.remove(this);
}

const IntegerType IntegerType::ShortInteger =
		IntegerType({&ReservedTypeWord::R_short},{&ReservedTypeWord::R_signed,&ReservedTypeWord::R_int});

const IntegerType IntegerType::BasicInteger =
		IntegerType({&ReservedTypeWord::R_int},{&ReservedTypeWord::R_signed});

#ifdef CPP_SUPPORT_LONG_INT
const IntegerType IntegerType::LongInteger =
		IntegerType({&ReservedTypeWord::R_long},{&ReservedTypeWord::R_signed,&ReservedTypeWord::R_int});
#endif

#ifdef CPP_SUPPORT_LONGLONG_INT
const IntegerType IntegerType::LongLongInteger =
		IntegerType({&ReservedTypeWord::R_long,&ReservedTypeWord::R_long},{&ReservedTypeWord::R_signed,&ReservedTypeWord::R_int});
#endif

const IntegerType IntegerType::UnsignedShortInteger =
		IntegerType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_short},{&ReservedTypeWord::R_int},false);

const IntegerType IntegerType::UnsignedBasicInteger =
		IntegerType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_int},res_words({}),false);

#ifdef CPP_SUPPORT_LONG_INT
const IntegerType IntegerType::UnsignedLongInteger =
		IntegerType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_long},{&ReservedTypeWord::R_int},false);
#endif

#ifdef CPP_SUPPORT_LONGLONG_INT
const IntegerType IntegerType::UnsignedLongLongInteger =
		IntegerType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_long,&ReservedTypeWord::R_long},{&ReservedTypeWord::R_int},false);
#endif

} /* namespace IntegerTypes */
} /* namespace IntegralTypes */
} /* namespace ArithmeticTypes */
} /* namespace FundamentalTypes */
} /* namespace Types */
} /* namespace Cpp */
