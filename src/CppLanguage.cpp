//SHEILa========================================================================
// Name        : Cpp.cpp
// Author      : FlowerGenius<justanortherngirl58@gmail.com>
// Version     : 
// Copyright   : 
// Description : 
// Module      : SHEILa
// Created     : Apr 4, 2018
// Modified    :
//==============================================================================

#include "CppLanguage.h"

//
//static Header std_stl_algorithm = Header("algorithm", true);
//static Header std_bitset        = Header("bitset", true);
//static Header std_complex       = Header("complex", true);
//static Header std_stl_deque     = Header("deque", true);
//static Header std_exception     = Header("exception",true);
//static Header std_fstream       = Header("fstream",true);
//static Header std_stl_functional= Header("functional",true);
//static Header std_iomanip       = Header("iomanip",true);
//static Header std_ios           = Header("ios",true);
//static Header std_iosfwd        = Header("iosfwd",true);
//static Header std_iostream      = Header("iostream",true);
//static Header std_istream       = Header("istream",true);
//static Header std_stl_iterator  = Header("iterator",true);
//static Header std_limits        = Header("limits",true);
//static Header std_stl_list      = Header("list",true);
//static Header std_locale        = Header("locale",true);
//static Header std_stl_map       = Header("map",true);
//static Header std_stl_memory    = Header("memory",true);
//static Header std_new           = Header("new",true);
//static Header std_stl_numeric   = Header("numeric",true);
//static Header std_ostream       = Header("ostream",true);
//static Header std_stl_queue     = Header("queue",true);
//static Header std_stl_set       = Header("set",true);
//static Header std_sstream       = Header("sstream",true);
//static Header std_stl_stack     = Header("stack", true);
//static Header std_stdexcept     = Header("stdexcept",true);
//static Header std_streambuf     = Header("streambuf",true);
//static Header std_string        = Header("string",true);
//static Header std_typeinfo      = Header("typeinfo",true);
//static Header std_stl_utility   = Header("utility",true);
//static Header std_valarray      = Header("valarray",true);
//static Header std_stl_vector    = Header("vector",true);


namespace Cpp {

namespace LexicalElements { namespace ReservedWords {

const rwid ReservedWord::R_and    = rwid("and");
const rwid ReservedWord::R_and_eq = rwid("and_eq");
const rwid ReservedWord::R_not    = rwid("not");
const rwid ReservedWord::R_not_eq = rwid("not_eq");

const rwid ReservedWord::R_asm    = rwid("asm");
const rwid ReservedWord::R_bitand = rwid("bitand");
const rwid ReservedWord::R_bitor  = rwid("bitor");
const rwid ReservedWord::R_break  = rwid("break");
const rwid ReservedWord::R_case   = rwid("case");
const rwid ReservedWord::R_catch  = rwid("catch");
const rwid ReservedWord::R_compl  = rwid("compl");
const rwid ReservedWord::R_const_cast= rwid("const_cast");
const rwid ReservedWord::R_continue= rwid("continue");
const rwid ReservedWord::R_default= rwid("default");
const rwid ReservedWord::R_delete= rwid("default");
const rwid ReservedWord::R_do= rwid("do");
const rwid ReservedWord::R_dynamic_cast= rwid("dynamic_cast");
const rwid ReservedWord::R_else= rwid("else");
const rwid ReservedWord::R_explicit= rwid("explicit");
const rwid ReservedWord::R_export= rwid("export");
const rwid ReservedWord::R_false= rwid("false");
const rwid ReservedWord::R_for= rwid("for");
const rwid ReservedWord::R_friend= rwid("friend");
const rwid ReservedWord::R_goto= rwid("goto");
const rwid ReservedWord::R_if= rwid("if");
const rwid ReservedWord::R_inline= rwid("inline");
const rwid ReservedWord::R_namespace= rwid("namespace");
const rwid ReservedWord::R_new= rwid("new");

const rwid ReservedWord::R_operator= rwid("operator");
const rwid ReservedWord::R_or= rwid("or");
const rwid ReservedWord::R_or_eq= rwid("or_eq");

const rwid ReservedWord::R_reinterpret_cast= rwid("reinterpret_cast");
const rwid ReservedWord::R_return= rwid("return");
const rwid ReservedWord::R_sizeof= rwid("sizeof");
const rwid ReservedWord::R_static_cast= rwid("static_cast");
const rwid ReservedWord::R_switch= rwid("switch");
const rwid ReservedWord::R_template= rwid("template");
const rwid ReservedWord::R_this= rwid("this");
const rwid ReservedWord::R_throw= rwid("throw");
const rwid ReservedWord::R_true= rwid("true");
const rwid ReservedWord::R_try= rwid("try");
const rwid ReservedWord::R_typedef= rwid("typedef");
const rwid ReservedWord::R_typeid= rwid("typeid");
const rwid ReservedWord::R_using= rwid("using");
const rwid ReservedWord::R_virtual= rwid("virtual");
const rwid ReservedWord::R_while= rwid("while");
const rwid ReservedWord::R_xor= rwid("xor");
const rwid ReservedWord::R_xor_eq= rwid("xor_eq");

const rtwid ReservedTypeWord::R_void        = rtwid("void");
const rtwid ReservedTypeWord::R_bool        = rtwid("bool");
const rtwid ReservedTypeWord::R_char        = rtwid("char");
const rtwid ReservedTypeWord::R_wchar_t     = rtwid("wchar_t");
const rtwid ReservedTypeWord::R_short       = rtwid("short");
const rtwid ReservedTypeWord::R_int         = rtwid("int");
const rtwid ReservedTypeWord::R_long        = rtwid("long");
const rtwid ReservedTypeWord::R_float       = rtwid("float");
const rtwid ReservedTypeWord::R_double      = rtwid("double");
const rtwid ReservedTypeWord::R_enum        = rtwid("enum");
const rtwid ReservedTypeWord::R_class       = rtwid("class");
const rtwid ReservedTypeWord::R_struct      = rtwid("struct");
const rtwid ReservedTypeWord::R_union       = rtwid("union");
const rtwid ReservedTypeWord::R_signed      = rtwid("signed");
const rtwid ReservedTypeWord::R_unsigned    = rtwid("unsigned");
const rtwid ReservedTypeWord::R_typename    = rtwid("typename");

const qid Qualifier::R_const        = qid("const");
const qid Qualifier::R_volatile     = qid("volatile");

const scid StorageClass::R_auto     = scid("auto");
const scid StorageClass::R_extern   = scid("extern");
const scid StorageClass::R_mutable  = scid("mutable");
const scid StorageClass::R_register = scid("register");
const scid StorageClass::R_static   = scid("static");

const alid AccessLevel::R_private   = alid("private");
const alid AccessLevel::R_protected = alid("protected");
const alid AccessLevel::R_public    = alid("public");

} } /* namespace LexicalElements::ReservedWords */

#if CPP_SUPPORT_CXX11_ATTR
namespace Attributes {

const anid AttrNamespace::STD_ATTR_NS_GNU = anid("gnu");
const anid AttrNamespace::STD_ATTR_NS_CC  = anid("CC");

const atid Attribute::STD_ATTR_NORETURN   = atid("noreturn");
const atid Attribute::STD_ATTR_CARRIES_DEPENDENCY = atid("carries_dependency");

#if CXX_CHECK_VER(14)
const atid Attribute::STD_ATTR_DEPRECATED = atid("deprecated");
#endif

#if CXX_CHECK_VER(17)
const AttrIdentifier Attribute::STD_ATTR_FALLTHROUGH;
const AttrIdentifier Attribute::STD_ATTR_NODISCARD;
const AttrIdentifier Attribute::STD_ATTR_MAYBE_UNUSED;
#endif

#if CXX_CHECK_VER(20)
const AttrIdentifier Attribute::STD_ATTR_LIKELY;
const AttrIdentifier Attribute::STD_ATTR_UNLIKELY;
const AttrIdentifier Attribute::STD_ATTR_NO_UNIQUE_ADDRESS;
#endif

}
#endif

namespace Types {
//
//using namespace LexicalElements::ReservedWords;
//
//std::map<Scopes::Scope*,std::list<Type*> > Type::all_types;
//
//#if REQUIRES_NOARG_CONSTRUCTOR
//Type::Type() {
//	rwords = false;
//	this->words = {};
//	this->myscope = &Scopes::Scope::global_scope;
//}
//#endif
//
//Type::Type(INIT_LIST<std::string> nm, Scopes::Scope *scop) {
//	this->type_name = nm;
//	rwords = false;
//	if (scop != nullptr) {
//		myscope = scop;
//	} else { myscope = &Scopes::Scope::global_scope; }
//	all_types[myscope].push_back(this);
//}
//
//Type::Type(res_words nm) {
//	this->words = nm;
//	rwords = true;
//	myscope = &Scopes::Scope::global_scope;
//	all_types[myscope].push_back(this);
//}
//
//Type::~Type() {
//	all_types[myscope].remove(this);
//}
//
//const Type Type::Type_name = Type({&ReservedTypeWord::R_typename});

//namespace FundamentalTypes { /*===============================================*/
//
////std::list<const FundamentalType*> FundamentalType::all_fundamental_types;
////
////#if REQUIRES_NOARG_CONSTRUCTOR
////FundamentalType::FundamentalType() : Type() {
////
////}
////#endif
////
////FundamentalType::FundamentalType(res_words req,
////		res_words opt) : Type(req){
////
////	words.insert(words.end(), opt);
////	all_fundamental_types.push_back(this);
////}
////
////FundamentalType::~FundamentalType() {
////	all_fundamental_types.remove(this);
////}
////
////const FundamentalType FundamentalType::Void =
////		FundamentalType({&ReservedTypeWord::R_void});
//
//namespace ArithmeticTypes { /*================================================*/
//
////std::list<const ArithmeticType*> ArithmeticType::all_arithmetic_types;
////
////#if REQUIRES_NOARG_CONSTRUCTOR
////ArithmeticType::ArithmeticType() : FundamentalType() {
////
////}
////#endif
////
////ArithmeticType::ArithmeticType(res_words req,
////		res_words opt) :
////				FundamentalType(req,opt) {
////	all_arithmetic_types.push_back(this);
////}
////
////ArithmeticType::~ArithmeticType() {
////	all_arithmetic_types.remove(this);
////}
//
//namespace IntegralTypes { /*==================================================*/
//
////std::list<const IntegralType*> IntegralType::all_integral_types;
////
////#if REQUIRES_NOARG_CONSTRUCTOR
////IntegralType::IntegralType() : ArithmeticType() {
////	_signed_ = true;
////}
////#endif
////
////IntegralType::IntegralType(res_words req,
////		res_words opt, bool sgn) :
////				ArithmeticType(req,opt), _signed_(sgn) {
////	all_integral_types.push_back(this);
////}
////
////IntegralType::~IntegralType() {
////	all_integral_types.remove(this);
////}
////
////const IntegralType IntegralType::Boolean =
////		IntegralType({&ReservedTypeWord::R_bool});
//
////namespace CharacterTypes { /*=================================================*/
////
////std::list<const CharacterType*> CharacterType::all_character_types;
////
////#if REQUIRES_NOARG_CONSTRUCTOR
////CharacterType::CharacterType() : IntegralType() {
////
////}
////#endif
////
////CharacterType::CharacterType(res_words req,
////		res_words opt,bool sgn) :
////				IntegralType(req,opt,sgn) {
////	all_character_types.push_back(this);
////}
////
////CharacterType::~CharacterType() {
////	all_character_types.remove(this);
////}
////
////const CharacterType CharacterType::Char =
////		CharacterType({&ReservedTypeWord::R_char},{&ReservedTypeWord::R_signed});
////
////#ifdef CPP_SUPPORT_WIDE_CHAR
////const CharacterType CharacterType::WideChar =
////		CharacterType({&R_wchar_t},{&R_signed});
////#endif
////
////const CharacterType CharacterType::UnsignedChar =
////		CharacterType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_char},res_words({}),false);
////
////#ifdef CPP_SUPPORT_WIDE_CHAR
////const CharacterType CharacterType::UnsignedWideChar =
////		CharacterType({&R_unsigned,&R_wchar_t},{},false);
////#endif
////
////} /* namespace CharacterTypes */
//
////namespace IntegerTypes { /*===================================================*/
////
////std::list<const IntegerType*> IntegerType::all_integer_types;
////
////#if REQUIRES_NOARG_CONSTRUCTOR
////IntegerType::IntegerType() : IntegralType() {
////
////}
////#endif
////
////IntegerType::IntegerType(res_words req,
////		res_words opt, bool sgn) :
////				IntegralType(req,opt,sgn) {
////	all_integer_types.push_back(this);
////}
////
////IntegerType::~IntegerType() {
////	all_integer_types.remove(this);
////}
////
////const IntegerType IntegerType::ShortInteger =
////		IntegerType({&ReservedTypeWord::R_short},{&ReservedTypeWord::R_signed,&ReservedTypeWord::R_int});
////
////const IntegerType IntegerType::BasicInteger =
////		IntegerType({&ReservedTypeWord::R_int},{&ReservedTypeWord::R_signed});
////
////#ifdef CPP_SUPPORT_LONG_INT
////const IntegerType IntegerType::LongInteger =
////		IntegerType({&ReservedTypeWord::R_long},{&ReservedTypeWord::R_signed,&ReservedTypeWord::R_int});
////#endif
////
////#ifdef CPP_SUPPORT_LONGLONG_INT
////const IntegerType IntegerType::LongLongInteger =
////		IntegerType({&ReservedTypeWord::R_long,&ReservedTypeWord::R_long},{&ReservedTypeWord::R_signed,&ReservedTypeWord::R_int});
////#endif
////
////const IntegerType IntegerType::UnsignedShortInteger =
////		IntegerType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_short},{&ReservedTypeWord::R_int},false);
////
////const IntegerType IntegerType::UnsignedBasicInteger =
////		IntegerType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_int},res_words({}),false);
////
////#ifdef CPP_SUPPORT_LONG_INT
////const IntegerType IntegerType::UnsignedLongInteger =
////		IntegerType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_long},{&ReservedTypeWord::R_int},false);
////#endif
////
////#ifdef CPP_SUPPORT_LONGLONG_INT
////const IntegerType IntegerType::UnsignedLongLongInteger =
////		IntegerType({&ReservedTypeWord::R_unsigned,&ReservedTypeWord::R_long,&ReservedTypeWord::R_long},{&ReservedTypeWord::R_int},false);
////#endif
////
////} /* namespace IntegerTypes */
//
//} /* namespace IntegralTypes */
//
//namespace FloatingPointTypes { /*=============================================*/
//
//std::list<const FloatingPointType*> FloatingPointType::all_floating_point_types;
//
//#if REQUIRES_NOARG_CONSTRUCTOR
//FloatingPointType::FloatingPointType() : ArithmeticType() {
//
//}
//
//#endif
//
//FloatingPointType::FloatingPointType(res_words req,
//		res_words opt) :
//		ArithmeticType(req,opt) {
//	all_floating_point_types.push_back(this);
//}
//
//FloatingPointType::~FloatingPointType() {
//	all_floating_point_types.remove(this);
//}
//
//const FloatingPointType FloatingPointType::Float =
//		FloatingPointType({&ReservedTypeWord::R_float});
//
//const FloatingPointType FloatingPointType::Double =
//		FloatingPointType({&ReservedTypeWord::R_double});
//
//#ifdef CPP_SUPPORT_LONG_DOUBLE
//const FloatingPointType FloatingPointType::LongDouble =
//		FloatingPointType({&ReservedTypeWord::R_long,&ReservedTypeWord::R_double});
//#endif
//
//#ifdef CPP_SUPPORT_LONGLONG_DOUBLE
//const FloatingPointType FloatingPointType::LongLongDouble =
//		FloatingPointType({&R_long,&R_long,
//	&R_double});
//#endif
//
//} /* namespace FloatingPointTypes */
//} /* namespace ArithmeticTypes */
//} /* namespace FundamentalTypes */

namespace CompoundTypes { /*==================================================*/

//CompoundType::CompoundType(res_words req,
//		res_words opt) : Type(req) {
//	words.insert(words.end(),opt);
//
//	contents_type = nullptr;
//}
//
//CompoundType::CompoundType(INIT_LIST<std::string> nm) : Type(nm) {
//
//	contents_type = nullptr;
//}
//
//CompoundType::~CompoundType() {
//
//}
//
//const CompoundType CompoundType::T_Enum =
//		CompoundType({&ReservedTypeWord::R_enum});
//
//#ifdef CPP_SUPPORT_SCOPED_ENUM
//const CompoundType CompoundType::T_ScopedEnum =
//		CompoundType({&ReservedTypeWord::R_enum},{&ReservedTypeWord::R_class,&ReservedTypeWord::R_struct});
//#endif

//namespace EnumerationTypes {
//
//EnumerationType::EnumerationType(std::string nm) : CompoundType(INIT_LIST<std::string>({nm})) {
//
//}
//
//EnumerationType::~EnumerationType() {
//
//}
//
//#ifdef CPP_SUPPORT_SCOPED_ENUM
//ScopedEnumType::ScopedEnumType(
//		const Types::ClassType *scopetype,
//		std::string nm,
//		const Types::IntegralType *dtype) : EnumerationType(nm) {
//	scope_class = scopetype;
//	datatype = dtype;
//
//}
//
//ScopedEnumType::~ScopedEnumType() {
//
//}
//#endif
//
//
//} /* namespace EnumerationTypes */


ArrayType::ArrayType(const Types::Type& target) :
		CompoundType(INIT_LIST<std::string>({target.getName().front()+"[]"})) {
	contents_type = &const_cast<Types::Type&>(target);
}

ArrayType::~ArrayType() {

}

StringType::StringType(const Types::CharacterType& string_of) :
			CompoundType(INIT_LIST<std::string>({"[]"})) {
	contents_type = &const_cast<Types::CharacterType&>(string_of);
}

StringType::~StringType() {

}

const StringType StringType::T_CharString =
		StringType(Types::CharacterType::Char);

#ifdef CPP_SUPPORT_WIDE_CHAR
const StringType StringType::T_WideCharString =
		StringType(Types::CharacterType::WideChar);
#endif


const StringType StringType::T_UnsignedCharString =
		StringType(Types::CharacterType::UnsignedChar);

#ifdef CPP_SUPPORT_WIDE_CHAR
const StringType StringType::T_UnsignedWideCharString =
		StringType(Types::CharacterType::UnsignedWideChar);
#endif

PointerType::PointerType(const Types::Type& target) :
	CompoundType(INIT_LIST<std::string>({"*"})) {
	contents_type = &const_cast<Types::Type&>(target);
}

PointerType::~PointerType() {

}


PointerToMemberType::PointerToMemberType(const Types::Type& member) :
	CompoundType() {

}

PointerToMemberType::~PointerToMemberType() {

}

ReferenceType::ReferenceType(const Types::Type& target) :
		CompoundType(INIT_LIST<std::string>({"&"})) {
	contents_type = &const_cast<Types::Type&>(target);

}

ReferenceType::~ReferenceType() {

}

namespace ClassTypes {

ClassType::ClassType(res_words req) :
		CompoundType(req) {

}

ClassType::~ClassType() {

}


const ClassType ClassType::T_Class =
		ClassType({&ReservedTypeWord::R_class});

const ClassType ClassType::T_Struct =
		ClassType({&ReservedTypeWord::R_struct});

const ClassType ClassType::T_Union =
		ClassType({&ReservedTypeWord::R_union});

CppUnionType::CppUnionType(std::string nm) : Type(INIT_LIST<std::string>({nm})) {

}

CppUnionType::~CppUnionType() {

}

CppClassType::CppClassType(std::string nm) : Type(INIT_LIST<std::string>({nm})) {

}

CppClassType::~CppClassType() {

}

CppStructType::CppStructType(std::string nm) : CppClassType(nm) {

}

CppStructType::~CppStructType() {

}



} /* namespace ClassTypes */
} /* namespace CompoundTypes */
} /* namespace Types */

namespace LexicalElements {

LexicalElement::LexicalElement() {

}

LexicalElement::~LexicalElement() {

}

Comment::Comment() {

}

Comment::~Comment() {

}

Identifier::Identifier(std::string unf, Types::Type *typ) {
	this->name = unf;

	if (typ != nullptr) {
		this->t = typ;
	}
}

void Identifier::declare(Types::Type *typ) {

	if (typ != nullptr) {
		this->t = typ;
	}
}

Identifier::~Identifier() {

}

Typename::Typename(std::string nm, Types::Type typ) : name(nm) {

}

Typename::~Typename() {

}

namespace ReservedWords {

RWordIdentifier::RWordIdentifier(std::string str) : Identifier(str) {

}

RWordIdentifier::~RWordIdentifier() {

}

ReservedWord::ReservedWord(const RWordIdentifier& id) : name(id) {

}

ReservedWord::~ReservedWord() {
	//remove_word(this);
}

RTypeWordIdentifier::RTypeWordIdentifier(std::string str) : RWordIdentifier(str) {

}

RTypeWordIdentifier::~RTypeWordIdentifier() {

}

ReservedTypeWord::ReservedTypeWord(const RTypeWordIdentifier& id) : ReservedWord(id) {
	//add_word(this);
}

ReservedTypeWord::~ReservedTypeWord() {
	//remove_word(this);
}

QualifierIdentifier::QualifierIdentifier(std::string str)  : RWordIdentifier(str) {

}

QualifierIdentifier::~QualifierIdentifier() {

}

Qualifier::Qualifier(const QualifierIdentifier& id) : ReservedWord(id) {
	//add_word(this);
}

Qualifier::~Qualifier() {
	//remove_word(this);
}

StorageClassIdentifier::StorageClassIdentifier(std::string str) : RWordIdentifier(str) {

}

StorageClassIdentifier::~StorageClassIdentifier() {

}

StorageClass::StorageClass(const StorageClassIdentifier& id) : ReservedWord(id) {
	//add_word(this);
}

StorageClass::~StorageClass() {
	//remove_word(this);
}

AccessLevelIdentifier::AccessLevelIdentifier(std::string str) : RWordIdentifier(str) {

}

AccessLevel::~AccessLevel() {

}

AccessLevel::AccessLevel(const AccessLevelIdentifier& id) : ReservedWord(id) {
	//add_word(this);
}

AccessLevel::~AccessLevel() {
	//remove_word(this);
}


} /* namespace ReservedWords */

Expression::Expression(INIT_LIST<LexicalElement> expr) {

}

void *Expression::yields() {
	return nullptr;
}

Expression::~Expression() {

}

namespace Literals {

Literal::Literal(std::string str, const Types::Type *typ) {
	verbatim = str;

	using namespace Types::FundamentalTypes::ArithmeticTypes::IntegralTypes;

	if (verbatim == "true")  {
		data = new bool(true);
		data_type = &IntegralType::Boolean;
	} else if (verbatim == "false") {
		data = new bool(false);
		data_type = &IntegralType::Boolean;
	}

	using namespace CharacterTypes;

	if (verbatim.at(0) == 'L' ) {
		if (verbatim.at(1) == '\'') { /* wide character literal */
			data = new char();
		} else if (verbatim.at(1) == '\"') { /* wide string literal */

		} else {

		}
	} else if (verbatim.at(0) == '\'') { /* character literal */

	} else if (verbatim.at(0) == '\"') { /* string literal */

	} else {

	}


	{ data_type = typ; }


}

Literal::~Literal() {
	//delete data;
}

} /* namespace Literals */

namespace Operators {

Operator::Operator(std::string regex, short associativity) {

}

Operator::~Operator() {

}

} /* namespace Operators */

} /* namespace LexicalElements */

namespace Scopes {

std::list<Scope*> Scope::scopes;

Scope Scope::global_scope = Scope();

Scope::Scope(INIT_LIST<LexicalElements::Identifier> ls) {
	scopes.push_back(this);
}

Scope::~Scope() {
	scopes.remove(this);
}

} /* namespace Scopes */


namespace Attributes {

AttrNamespace::AttrNamespace(AttrNamespaceIdentifier id) {

}

AttrNamespace::~AttrNamespace() {

}

Attribute::Attribute(AttrIdentifier id) {

}

Attribute::Attribute(AttrIdentifier id, AttrNamespace nspace) {

}

Attribute::Attribute(AttrIdentifier id, LexicalElements::arglist args) {

}

Attribute::Attribute(AttrIdentifier id, AttrNamespace nspace,
		LexicalElements::arglist args) {

}

Attribute::~Attribute() {

}


} /* namespace Attributes */

Cpp::Variable::Variable(std::string proposed_id,Types::Type *typ,
		LexicalElements::Expression *val) : id(LexicalElements::Identifier(proposed_id)) {

//	id = LexicalElements::Identifier(proposed_id);
	type = typ;
	value = val;

	if (type != nullptr) {
		id.declare(type);
	}
}

std::string Cpp::Variable::cpp_str() {

}

std::string Cpp::Variable::xml_str() {


}

Cpp::Variable::~Variable() {

}


namespace Enumerations {


Enumeration::Enumeration(std::string nm,
		const Types::IntegralType *etype,
		std::map<std::string,LexicalElements::Literals::Literal> mp) {

	enumerator_type = etype;

	for (auto&& val : mp) {
		Variable *var = new Variable
				(
					val.first,
					const_cast<Types::IntegralType*>(enumerator_type),
					&val.second
				);

		enumerators.push_back(var);
	}

	new_type = new Types::EnumerationType(nm);

}

Enumeration::~Enumeration() {
//	delete new_type;
//
//	for (auto&& val : enumerators) {
//		delete val;
//	}
}

} /* namespace Enumerations */


namespace Classes {

BasicClass::BasicClass(AccessLevel* acc, std::string prop_name){
	if (acc != nullptr) {
		default_access = acc;
	} else { default_access = new AccessLevel(AccessLevel::R_public); }
}

BasicClass::~BasicClass() {
	delete default_access;
}

UnionClass::UnionClass(std::string prop_name) :
		BasicClass(new AccessLevel(AccessLevel::R_public), prop_name) {

}

UnionClass::~UnionClass() {

}

CppClass::CppClass(AccessLevel* acc, std::string prop_name,
		parent_list mp) : BasicClass(acc,prop_name) {

}

CppClass::~CppClass() {

}

ClassClass::ClassClass(std::string prop_name, parent_list mp) :
		Classes::CppClass(new AccessLevel(AccessLevel::R_private), prop_name, mp) {

}

ClassClass::~ClassClass() {

}

StructClass::StructClass(std::string prop_name, parent_list mp) :
		Classes::CppClass(new AccessLevel(AccessLevel::R_public), prop_name, mp) {

}

StructClass::~StructClass() {

}

} /* namespace Classes */

#ifdef CPP_SUPPORT_SCOPED_ENUM
namespace Enumerations {

ScopedEnumeration::ScopedEnumeration(const Types::ClassType scopetype,
		std::string nm,
		const Types::IntegerType *dtype,
		std::map<std::string,LexicalElements::Literals::Literal> mp) :
				Enumeration(nm,dtype,mp) {

}

ScopedEnumeration::~ScopedEnumeration() {

}


} /* namespace Enumerations */
#endif

namespace Structure {

namespace Files {

File::File(std::string pth) : Scopes::Scope() {
	this->path = pth;
}

File::~File() {

}

namespace InFiles {

InFile::InFile(std::string pth) : File(pth) {

}

InFile::~InFile() {

}

Header::Header(std::string pth, bool standard) : InFile(pth) {
	this->standard = standard;
}

std::string Header::xml_str() {

}

std::string Header::cpp_str() {

}

Header::~Header() {

}

Source::Source(std::string pth) : InFile(pth) {

}

Source::~Source() {

}

} /* namespace InFiles */

namespace OutFiles {

OutFile::OutFile(std::string pth) : File(pth) {

}

OutFile::~OutFile() {

}

#if (BUILD_FOR_SHEILA_DAEMON == 1)
template<class _N>
std::vector<std::string> Object<_N>::this_object_names;

template<class _N>
std::vector<std::string> Object<_N>::this_object_authors;

template<class _N>
std::vector<std::string> Object<_N>::this_object_versions;

template<class _N>
std::vector<std::string> Object<_N>::this_object_copyrights;

template<class _N>
std::vector<std::string> Object<_N>::this_object_descriptions;

template<class _N>
std::vector<std::string> Object<_N>::this_object_modules;

template<class _N>
std::string              Object<_N>::this_object_created;

template<class _N>
std::vector<std::string> Object<_N>::this_object_modified;

template<class _N>
Cpp::Structure::Files::InFiles::Source* Object<_N>::this_object_source;

template<class _N>
std::vector<Cpp::Structure::Files::InFiles::Header*>  Object<_N>::this_object_headers;
#endif

Artifact::Artifact() {

}

Artifact::~Artifact() {

}

} /* namespace OutFiles */

} /* namespace Files */

} /* namespace Structure */

} /* namespace Cpp */

