/*SHEILa========================================================================
 * Name        : CppLanguage.h
 * Author      : FlowerGenius<justanortherngirl58@gmail.com>
 * Version     : 
 * Copyright   : 
 * Description : 
 * Module      : CppLanguage
 * Created     : May 8, 2018
 * Modified    :
 *==============================================================================
 */

#ifndef CPPLANGUAGE_CPPLANGUAGE_H_
#define CPPLANGUAGE_CPPLANGUAGE_H_

	#ifdef _WIN32
	#pragma once

	#ifdef CPPLANGUAGE_EXPORTS
		#define CPPLANGUAGE_API __declspec(dllexport)
	#else
		#define CPPLANGUAGE_API __declspec(dllimport)
	#endif

	#else
		#define CPPLANGUAGE_API
	#endif



#define CXX_97 199711L
#define CXX_11 201103L
#define CXX_14 201401L
#define CXX_17 201702L
#define CXX_20 202001L

#include "CppLanguageConfig.h"

#define CXX_CHECK_VER(x) (( (__cplusplus) >= (CXX_##x) ) || ( (TARGET_CPP_VERSION) >= (x)))

#if CXX_CHECK_VER(97)

//#if ( __cplusplus < CXX_97 )
//	#undef __cplusplus
//	#define __cplusplus CXX_97
//#endif

	#include <string>
	#include <vector>
	#include <list>
	#include <map>
	#include <ctime>
	#include <iostream>
	#include <sstream>
#endif

#if CXX_CHECK_VER(11)

//#if ( __cplusplus < CXX_11 )
//	#undef __cplusplus
//	#define __cplusplus CXX_11
//#endif

	#include <initializer_list>

	#define CPP_SUPPORT_SCOPED_ENUM true
	#define CPP_SUPPORT_INITIALIZER_LIST true
	#define CPP_SUPPORT_CXX11_RANGE true
	#define CPP_SUPPORT_CXX11_ATTR true
	#define CPP_SUPPORT_EMPTY_DECLARATION true
	#define CPP_SUPPORT_TYPE_ALIAS_DECLARATION true
	#define CPP_SUPPORT_STATIC_ASSERT_DECLARATION true
	#define CPP_SUPPORT_OPAQUE_ENUM_DECLARATION true

#endif

#if CXX_CHECK_VER(14)

//#if ( __cplusplus < CXX_14 )
//	#undef __cplusplus
//	#define __cplusplus CXX_14
//#endif

#endif

#if CXX_CHECK_VER(17)

//#if ( __cplusplus < CXX_17 )
//#undef __cplusplus
//#define __cplusplus CXX_17
//#endif

#endif

#if CXX_CHECK_VER(20)

//#if ( __cplusplus < CXX_20 )
//#undef __cplusplus
//#define __cplusplus CXX_20
//#endif

#endif


#if( __WORDSIZE >= 32)
	#define CPP_SUPPORT_LONG_INT true
#endif

#if( __WORDSIZE >= 64)
	#define CPP_SUPPORT_LONGLONG_INT true
	#define CPP_SUPPORT_LONG_DOUBLE true
#endif

#if( __WORDSIZE >= 128)
	#define CPP_SUPPORT_LONGLONG_DOUBLE true
#endif


#if (!CPP_SUPPORT_INITIALIZER_LIST)
	#define INIT_LIST std::list
#else
	#define INIT_LIST std::initializer_list
#endif

namespace Cpp {
	CPPLANGUAGE_API class Feature;
//	CPPLANGUAGE_API const std::string& Feature::getScope() const;
//	CPPLANGUAGE_API const std::string& Feature::getIdentifier() const;
//	CPPLANGUAGE_API std::string Feature::getAbsoluteIdentifier();
//	CPPLANGUAGE_API std::string cpp_str();
//	CPPLANGUAGE_API std::string xml_str();
	namespace Types {
		CPPLANGUAGE_API class Type;
		namespace FundamentalTypes {
			CPPLANGUAGE_API class FundamentalType;
			namespace ArithmeticTypes {
				CPPLANGUAGE_API class ArithmeticType;
				namespace IntegralTypes {
					CPPLANGUAGE_API class IntegralType;
					namespace CharacterTypes {
						CPPLANGUAGE_API class CharacterType;
					} /* namespace CharacterTypes */
					namespace IntegerTypes {
						CPPLANGUAGE_API class IntegerType;
					} /* namespace IntegerTypes */
				} /* namespace IntegralTypes */
				namespace FloatingPointTypes {
					CPPLANGUAGE_API class FloatingPointType;
				} /* namespace FloatingPointTypes */
			} /* namespace ArithmeticTypes */
		} /* namespace FundamentalTypes */

		using namespace FundamentalTypes;

		typedef FundamentalType FundamentalType;

		using namespace ArithmeticTypes;

		typedef ArithmeticType ArithmeticType;

		using namespace IntegralTypes;

		typedef IntegralType IntegralType;

		using namespace CharacterTypes;

		typedef CharacterType CharacterType;

		using namespace IntegerTypes;

		typedef IntegerType IntegerType;

		using namespace FloatingPointTypes;

		typedef FloatingPointType FloatingPointType;

		namespace CompoundTypes {
		    CPPLANGUAGE_API class CompoundType;
			namespace EnumerationTypes {
			    CPPLANGUAGE_API class EnumerationType;
#if CPP_SUPPORT_SCOPED_ENUM
			    CPPLANGUAGE_API class ScopedEnumType;
#endif
			} /* namespace EnumerationTypes */
			CPPLANGUAGE_API class ArrayType;
			CPPLANGUAGE_API class StringType;
			CPPLANGUAGE_API class PointerType;
			CPPLANGUAGE_API class PointerToMemberType;
			CPPLANGUAGE_API class ReferenceType;
			CPPLANGUAGE_API namespace ClassTypes {
				CPPLANGUAGE_API class ClassType;
				CPPLANGUAGE_API class CppUnionType;
				CPPLANGUAGE_API class CppClassType;
				CPPLANGUAGE_API class CppStructType;
			} /* namespace ClassTypes */
		} /* namespace CompoundTypes */

		using namespace CompoundTypes;

		typedef CompoundType CompoundType;

		using namespace EnumerationTypes;

		typedef EnumerationType EnumerationType;

		typedef ArrayType ArrayType;
		typedef StringType StringType;
		typedef PointerType PointerType;
		typedef PointerToMemberType PointerToMemberType;
		typedef ReferenceType ReferenceType;

		using namespace ClassTypes;

		typedef ClassType ClassType;
		typedef CppUnionType CppUnionType;
		typedef CppClassType CppClassType;
		typedef CppStructType CppStructType;

#if CPP_SUPPORT_SCOPED_ENUM
		typedef ScopedEnumType ScopedEnumType;
#endif
	} /* namespace Types */
	namespace LexicalElements {
	    CPPLANGUAGE_API class LexicalElement;
	    CPPLANGUAGE_API class Comment;
	    CPPLANGUAGE_API class Identifier;
	    CPPLANGUAGE_API class Typename;
		namespace ReservedWords {
			struct RWordIdentifier;
			CPPLANGUAGE_API class ReservedWord;

			struct RTypeWordIdentifier;
			CPPLANGUAGE_API class ReservedTypeWord;

			struct QualifierIdentifier;
			CPPLANGUAGE_API class Qualifier;

			struct StorageClassIdentifier;
			CPPLANGUAGE_API class StorageClass;

			struct AccessLevelIdentifier;
			CPPLANGUAGE_API class AccessLevel;

			typedef RWordIdentifier rwid;
			typedef RTypeWordIdentifier rtwid;
			typedef QualifierIdentifier qid;
			typedef StorageClassIdentifier scid;
			typedef AccessLevelIdentifier alid;

		} /* namespace ReservedWords */
		class Expression;
		namespace Literals {
			CPPLANGUAGE_API class Literal;
		} /* namespace Literals */
		namespace Operators {
			CPPLANGUAGE_API class Operator;
		} /* namespace Operators */
	} /* namespace LexicalElements */
	namespace Scopes {
		CPPLANGUAGE_API class Scope;
	} /* namespace Scopes */
	class Namespace;
	namespace Attributes {
		struct AttrNamespaceIdentifier;
		CPPLANGUAGE_API class AttrNamespace;

		struct AttrIdentifier;
		CPPLANGUAGE_API class Attribute;

		typedef AttrNamespaceIdentifier anid;
		typedef AttrIdentifier          atid;
	} /* namespace Attributes */
} /* namespace Cpp */

#include <CppLanguage/include/CppLanguage.hpp>

#endif /*CPPLANGUAGE_CPPLANGUAGE_H_ */
