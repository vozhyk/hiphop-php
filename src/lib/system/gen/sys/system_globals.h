/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __GENERATED_sys_system_globals_h__
#define __GENERATED_sys_system_globals_h__

#include <php/classes/arrayaccess.h>
#include <php/classes/directory.h>
#include <php/classes/exception.h>
#include <php/classes/iterator.h>
#include <php/classes/pear_error.h>
#include <php/classes/reflection.h>
#include <php/classes/splfile.h>
#include <php/classes/splobjectstorage.h>
#include <php/classes/stdclass.h>
#include <php/globals/constants.h>
#include <php/globals/symbols.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////


// Class Forward Declarations

class SystemGlobals : public Globals {
public:
  SystemGlobals();
  static void initialize();

  bool dummy; // for easier constructor initializer output

  // Global Variables
  Variant gv_argc;
  Variant gv_argv;
  Variant gv__SERVER;
  Variant gv__GET;
  Variant gv__POST;
  Variant gv__COOKIE;
  Variant gv__FILES;
  Variant gv__ENV;
  Variant gv__REQUEST;
  Variant gv__SESSION;
  Variant gv_HTTP_RAW_POST_DATA;
  Variant gv_http_response_header;

  // Dynamic Constants

  // Function/Method Static Variables

  // Function/Method Static Variable Initialization Booleans

  // Class Static Variables

  // Class Static Initializer Flags

  // PseudoMain Variables
  bool run_pm_php$classes$arrayaccess_php;
  bool run_pm_php$classes$directory_php;
  bool run_pm_php$classes$exception_php;
  bool run_pm_php$classes$iterator_php;
  bool run_pm_php$classes$pear_error_php;
  bool run_pm_php$classes$reflection_php;
  bool run_pm_php$classes$splfile_php;
  bool run_pm_php$classes$splobjectstorage_php;
  bool run_pm_php$classes$stdclass_php;
  bool run_pm_php$globals$constants_php;
  bool run_pm_php$globals$symbols_php;

  // Redeclared Functions

  // Redeclared Classes
};

// Scalar Arrays
class SystemScalarArrays {
public:
  static void initialize();

  static StaticArray ssa_[1];
};

extern const int64 k_UCOL_CASE_LEVEL;
extern const int64 k_SQLITE3_TEXT;
extern const int64 k_UCOL_CASE_FIRST;
extern const int64 k_UCOL_DEFAULT_STRENGTH;
extern const int64 k_SQLITE3_OPEN_CREATE;
extern const int64 k_FB_UNSERIALIZE_UNRECOGNIZED_OBJECT_TYPE;
extern const int64 k_UCOL_ON;
extern const int64 k_SQLITE3_FLOAT;
extern const int64 k_UCOL_SHIFTED;
extern const int64 k_FB_UNSERIALIZE_UNEXPECTED_ARRAY_KEY_TYPE;
extern const int64 k_UCOL_IDENTICAL;
extern const int64 k_SQLITE3_OPEN_READWRITE;
extern const int64 k_SQLITE3_ASSOC;
extern const int64 k_SQLITE3_NUM;
extern const int64 k_UCOL_HIRAGANA_QUATERNARY_MODE;
extern const int64 k_UCOL_STRENGTH;
extern const int64 k_UCOL_TERTIARY;
extern const int64 k_FB_UNSERIALIZE_NONSTRING_VALUE;
extern const int64 k_UCOL_UPPER_FIRST;
extern const int64 k_SQLITE3_INTEGER;
extern const int64 k_SQLITE3_BOTH;
extern const int64 k_UCOL_LOWER_FIRST;
extern const int64 k_UCOL_SECONDARY;
extern const int64 k_UCOL_ALTERNATE_HANDLING;
extern const int64 k_SQLITE3_OPEN_READONLY;
extern const int64 k_UCOL_NUMERIC_COLLATION;
extern const int64 k_UCOL_NORMALIZATION_MODE;
extern const int64 k_UCOL_DEFAULT;
extern const int64 k_UCOL_FRENCH_COLLATION;
extern const int64 k_UCOL_PRIMARY;
extern const int64 k_UCOL_OFF;
extern const int64 k_UCOL_QUATERNARY;
extern const int64 k_SQLITE3_NULL;
extern const int64 k_UCOL_NON_IGNORABLE;
extern const int64 k_FB_UNSERIALIZE_UNEXPECTED_END;
extern const int64 k_SQLITE3_BLOB;


///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_sys_system_globals_h__
