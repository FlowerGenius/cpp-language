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

EnumerationType::EnumerationType(std::string nm) : CompoundType(INIT_LIST<std::string>({nm})) {

}

EnumerationType::~EnumerationType() {

}

} /* namespace EnumerationTypes */
} /* namespace CompoundTypes */
} /* namespace Types */
} /* namespace Cpp */
