/* Copyright (c) 2010 Dave Reisner
 *
 * util.h
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

#ifndef _BURP_UTIL_H
#define _BURP_UTIL_H

#define TRUE 1
#define FALSE 0

#define FREE(x) do { free(x); x = NULL; } while (0)
#define STREQ(x,y) strcmp(x,y) == 0
#define STRNEQ(x,y) strcmp(x,y) != 0

void delete_file(const char*);
void die(const char*, ...);
int file_exists(const char*);
char *get_password(size_t);
char *get_tmpfile(const char*);
char *get_username(size_t);
char *strtrim(char*);
int touch(const char*);
void *xcalloc(size_t, size_t);
void *xmalloc(size_t);

#endif /* _BURP_UTIL_H */
