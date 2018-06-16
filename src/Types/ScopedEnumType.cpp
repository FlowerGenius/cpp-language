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
namespace EnumerationTypes {

#ifdef CPP_SUPPORT_SCOPED_ENUM
ScopedEnumType::ScopedEnumType(
		const Types::ClassType *scopetype,
		std::string nm,
		const Types::IntegralType *dtype) : EnumerationType(nm) {
	scope_class = scopetype;
	datatype = dtype;

}

ScopedEnumType::~ScopedEnumType() {

}
#endif

} /* namespace EnumerationTypes */
} /* namespace CompoundTypes */
} /* namespace Types */
} /* namespace Cpp */
