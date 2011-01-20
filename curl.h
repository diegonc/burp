/* Copyright (c) 2010 Dave Reisner
 *
 * curl.h
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef _BURP_CURL_H
#define _BURP_CURL_H

#include <curl/curl.h>
#include <curl/easy.h>

#define AUR_USER_MAX            16
#define AUR_PASSWORD_MAX        128

#ifndef AUR_URL_NO_PROTO
#  define AUR_URL_NO_PROTO        "aur.archlinux.org"
#endif
#ifndef AUR_LOGIN_URL
#  define AUR_LOGIN_URL           "https://aur.archlinux.org/"
#endif
#ifndef AUR_SUBMIT_URL
#  define AUR_SUBMIT_URL          "https://aur.archlinux.org/pkgsubmit.php"
#endif

#define AUR_COOKIE_NAME         "AURSID"

#define AUR_LOGIN_FIELD         "user"
#define AUR_PASSWD_FIELD        "passwd"
#define AUR_REMEMBERME_FIELD    "remember_me"

#define AUR_LOGIN_FAIL_MSG      "Bad username or password."

/* upload errors */
#define AUR_NO_LOGIN            "You must create an account before you can upload packages"
#define AUR_NO_OVERWRITE        "not allowed to overwrite"
#define AUR_UNKNOWN_FORMAT      "Unknown file format"
#define AUR_INVALID_NAME        "Invalid name"
#define AUR_NO_PKGBUILD         "PKGBUILD does not exist"
#define AUR_NO_BUILD_FUNC       "Missing build function"
#define AUR_MISSING_VAR         "Missing %s variable in PKGBUILD"
#define AUR_MISSING_PROTO       "missing a protocol"



struct write_result {
  char *memory;
  size_t size;
};

int curl_local_init();
long aur_login(void);
long aur_upload(const char*);

CURL *curl;
extern CURL *curl;

#endif /* _BURP_CURL_H */
