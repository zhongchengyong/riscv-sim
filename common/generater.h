//
// Created by kode.zhong on 2020/12/27.
//

#ifndef LOX_INTERPRETER_COMMON_GENERATER_H_
#define LOX_INTERPRETER_COMMON_GENERATER_H_

#include <boost/preprocessor.hpp>

// TODO(zhongcy): Add constructor with arguments
#define DECLARE_DATA_MEMBER(R, TYPES, INDEX, NAME) \
BOOST_PP_SEQ_ELEM(INDEX,TYPES) BOOST_PP_CAT(m_,NAME);

#define DEFINE_MEMBER(TYPES, MEMBERS) \
BOOST_PP_SEQ_FOR_EACH_I(DECLARE_DATA_MEMBER, TYPES, MEMBERS)

#define DEFINE_PARSER_TYPE(NAME, BASE, TYPES, MEMBERS)\
 struct NAME : public BASE{\
  DEFINE_MEMBER(TYPES, MEMBERS)\
  std::any Accept(BASE##Visitor& visitor) override {\
    return visitor.Visit##NAME(*this);\
  }\
};

#define DEFINE_EXPR_TYPE(NAME, TYPES, MEMBERS)\
DEFINE_PARSER_TYPE(NAME, Expr, TYPES, MEMBERS)

#define DEFINE_STMT_TYPE(NAME, TYPES, MEMBERS)\
DEFINE_PARSER_TYPE(NAME, Stmt, TYPES, MEMBERS)


#endif //LOX_INTERPRETER_COMMON_GENERATER_H_
