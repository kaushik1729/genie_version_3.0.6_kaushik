// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_FwMsg

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "Messenger.h"

// Header files passed via #pragma extra_include

namespace log4cpp {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *log4cpp_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("log4cpp", 0 /*version*/, "log4cpp/Priority.hh", 55,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &log4cpp_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *log4cpp_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace genie {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "", 260,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &genie_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *genie_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *geniecLcLMessenger_Dictionary();
   static void geniecLcLMessenger_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::Messenger*)
   {
      ::genie::Messenger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::Messenger));
      static ::ROOT::TGenericClassInfo 
         instance("genie::Messenger", "", 264,
                  typeid(::genie::Messenger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLMessenger_Dictionary, isa_proxy, 0,
                  sizeof(::genie::Messenger) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::Messenger*)
   {
      return GenerateInitInstanceLocal((::genie::Messenger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genie::Messenger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLMessenger_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genie::Messenger*)0x0)->GetClass();
      geniecLcLMessenger_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLMessenger_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
} // end of namespace ROOT for class ::genie::Messenger

namespace {
  void TriggerDictionaryInitialization_libGFwMsg_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"Framework/Messenger",
"Types",
"Interfaces",
"GENIE",
"../Types",
"../Interfaces",
"GENIE/Framework/Messenger",
"GENIE/Types",
"GENIE/Interfaces",
"../include",
"../include/GENIE",
"../include/GENIE/Framework/Messenger",
"../include/GENIE/Types",
"../include/GENIE/Interfaces",
"/grid/fermiapp/products/larsoft/libxml2/v2_9_5/Linux64bit+3.10-2.17-debug/include/libxml2",
"/grid/fermiapp/products/larsoft/log4cpp/v1_1_3a/Linux64bit+3.10-2.17-e17-debug/include",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/",
"/grid/fermiapp/products/larsoft/root/v6_12_06a/Linux64bit+3.10-2.17-e17-debug/include",
"/genie/app/users/kborah/Generator/src/Framework/Messenger/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGFwMsg dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genie{class Messenger;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGFwMsg dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//____________________________________________________________________________
/*!

\class    genie::Messenger

\brief    A more convenient interface to the log4cpp Message Service

\author   Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          University of Liverpool & STFC Rutherford Appleton Lab

\created  June 16, 2004

\cpright  Copyright (c) 2003-2019, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _MESSENGER_H_
#define _MESSENGER_H_

#include <iostream>
#include <cstring>
#include <string>
#include <map>

// ROOT5 has difficulty with parsing log4cpp headers
#if !defined(__CINT__) && !defined(__MAKECINT__)
  #include "log4cpp/Category.hh"
  #include "log4cpp/Appender.hh"
  #include "log4cpp/OstreamAppender.hh"
  #include "log4cpp/BasicLayout.hh"
  #include "log4cpp/Priority.hh"
#else
  namespace log4cpp {
    class Priority {
      typedef int Value;
    };
    class Category;
  }
#endif

#include "Framework/Conventions/GBuild.h"

using std::string;

// comment defined priority levels for the document generator
/*! \def pFATAL  \brief Defines the FATAL  priority level */
/*! \def pALERT  \brief Defines the ALERT  priority level */
/*! \def pCRIT   \brief Defines the CRIT   priority level */
/*! \def pERROR  \brief Defines the ERROR  priority level */
/*! \def pWARN   \brief Defines the WARN   priority level */
/*! \def pNOTICE \brief Defines the NOTICE priority level */
/*! \def pINFO   \brief Defines the INFO   priority level */
/*! \def pDEBUG  \brief Defines the DEBUG  priority level */

#define pFATAL  log4cpp::Priority::FATAL
#define pALERT  log4cpp::Priority::ALERT
#define pCRIT   log4cpp::Priority::CRIT
#define pERROR  log4cpp::Priority::ERROR
#define pWARN   log4cpp::Priority::WARN
#define pNOTICE log4cpp::Priority::NOTICE
#define pINFO   log4cpp::Priority::INFO
#define pDEBUG  log4cpp::Priority::DEBUG

/*! \def ENDL  \brief A shortcut for log4cpp's CategoryStream::ENDLINE or std manipulators*/

#ifdef __GENIE_USES_LOG4CPP_VERSION__
  #if __GENIE_USES_LOG4CPP_VERSION__==0
    #define ENDL log4cpp::CategoryStream::ENDLINE
  #else
    #define ENDL std::endl
  #endif
#else
  #define ENDL std::endl
#endif

/*!
  \def   SLOG(stream, priority)
  \brief A macro that returns the requested log4cpp::Category
         appending a short string (using the __FUNCTION__ and __LINE__ macros)
         with information for the calling method [produces short message].
*/

#define SLOG(stream, priority) \
           (*Messenger::Instance())(stream) \
               << priority << "[s] <" \
               << __FUNCTION__ << " (" << __LINE__ << ")> : "

/*!
  \def   LOG(stream, priority)
  \brief A macro that returns the requested log4cpp::Category
         appending a string (using the __FILE__, __FUNCTION__ and __LINE__ macros)
         with information for the calling method [produces normal messages].
*/

#define LOG(stream, priority) \
           (*Messenger::Instance())(stream) \
               << priority << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

/*!
  \def   HIDE_GENIE_MSG_LOG_MACROS
  \brief Use this cpp flag variable to ensure LOG_DEBUG ... LOG_FATAL macros are not exposed.
         This allows this header to be used in conjunction with the art framework's
         conflicting MessengeFacility's macros of the same name.  The two argument
         LOG macro (see above) is still available for use.
         Currently this comes up only via Algorithm.h's inclusion of Algorithm.icc
         which included Messenger.h.
*/
#ifndef HIDE_GENIE_MSG_LOG_MACROS

#define LOG_FATAL(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::FATAL << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

#define LOG_ALERT(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::ALERT << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

#define LOG_CRIT(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::CRIT << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

#define LOG_ERROR(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::ERROR << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

#define LOG_WARN(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::WARN << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

#define LOG_NOTICE(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::NOTICE << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

#define LOG_INFO(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::INFO << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

#define LOG_DEBUG(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::DEBUG << "[n] <" \
               << __FILE__ << "::" << __FUNCTION__ << " (" << __LINE__ << ")> : "

#endif // HIDE_GENIE_MSG_LOG_MACROS

/*!
  \def   LLOG(stream, priority)
  \brief A macro that returns the requested log4cpp::Category
         appending a string (using the __PRETTY_FUNCTION__ and __LINE__ macros)
         with information for the calling method [produces long messages].
*/

#define LLOG(stream, priority) \
           (*Messenger::Instance())(stream) \
               << priority << "[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

#define LLOG_FATAL(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::FATAL << "[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

#define LLOG_ALERT(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::ALERT << "[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

#define LLOG_CRIT(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::CRIT << "[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

#define LLOG_ERROR(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::ERROR << "[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

#define LLOG_WARN(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::WARN << "'[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

#define LLOG_NOTICE(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::NOTICE << "[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

#define LLOG_INFO(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::INFO << "[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

#define LLOG_DEBUG(stream) \
          (*Messenger::Instance())(stream) \
               << log4cpp::Priority::DEBUG << "[l] <" \
               << __PRETTY_FUNCTION__ << " (" << __LINE__ << ")> : "

/*!
  \def   BLOG(stream, priority)
  \brief A macro that returns the requested log4cpp::Category appending no
         additional information
*/

#define BLOG(stream, priority) \
          (*Messenger::Instance())(stream) << priority

/*!
  \def   MAXSLOG(stream, priority, maxcount)
  \brief Similar to SLOG(stream,priority) but quits after "maxcount" messages

  \def   MAXLOG(stream, priority, maxcount)
  \brief Similar to LOG(stream,priority) but quits after "maxcount" messages

  \def   MAXLLOG(stream, priority, maxcount)
  \brief Similar to LLOG(stream,priority) but quits after "maxcount" messages


*/

// Macro to concatenate two symbols:
#define TOKCAT(x,y) x##y
// Macro to expand preprocessor variables and concatenate:
#define TOKCAT2(x,y) TOKCAT(x,y)
// Macro to concatenate source line with a symbol:
#define LINECAT(x) TOKCAT2(x, __LINE__ )

#define MAXSLOG(s,l,c)  \
  static int  LINECAT(MSGCNT) = 0; \
  const char* LINECAT(MSGADD) = (++LINECAT(MSGCNT)==c) ? "..Last Message .. " : ""; \
  if (LINECAT(MSGCNT) > c || LINECAT(MSGCNT) < 0) \
     {;} else SLOG(s,l) << LINECAT(MSGADD)

#define MAXLOG(s,l,c)  \
  static int  LINECAT(MSGCNT) = 0; \
  const char* LINECAT(MSGADD) = (++LINECAT(MSGCNT)==c) ? "..Last Message .. " : ""; \
  if (LINECAT(MSGCNT) > c || LINECAT(MSGCNT) < 0) \
     {;} else LOG(s,l) << LINECAT(MSGADD)

#define MAXLLOG(s,l,c)  \
  static int  LINECAT(MSGCNT) = 0; \
  const char* LINECAT(MSGADD) = (++LINECAT(MSGCNT)==c) ? "..Last Message .. " : ""; \
  if (LINECAT(MSGCNT) > c || LINECAT(MSGCNT) < 0) \
     {;} else LLOG(s,l) << LINECAT(MSGADD)


namespace genie {

extern bool gAbortingInErr;

class Messenger
{
public:
  static Messenger * Instance(void);

  log4cpp::Category & operator () (const char * stream);
  void SetPriorityLevel(const char * stream, log4cpp::Priority::Value p);

  bool SetPrioritiesFromXmlFile(string filename);

private:
  Messenger();
  Messenger(const Messenger & config_pool);
  virtual ~Messenger();

  static Messenger * fInstance;

  void Configure(void);

  log4cpp::Priority::Value PriorityFromString(string priority);

  struct Cleaner {
      void DummyMethodAndSilentCompiler() { }
      ~Cleaner() {
         if (Messenger::fInstance !=0) {
            delete Messenger::fInstance;
            Messenger::fInstance = 0;
         }
      }
  };
  friend struct Cleaner;
};

}      // genie namespace
#endif // _MESSENGER_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genie::Messenger", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGFwMsg",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGFwMsg_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGFwMsg_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGFwMsg() {
  TriggerDictionaryInitialization_libGFwMsg_Impl();
}
