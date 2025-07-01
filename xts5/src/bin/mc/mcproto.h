/*
Copyright (c) 2005 X.Org Foundation LLC

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
/*
*
* Copyright (c) Applied Testing and Technology, Inc. 1995
* All Rights Reserved.
*
* Project: VSW5
*
* File: src/bin/mc/mcproto.h
*
* Description:
*       Function signatures for mc utilities
*
* Modifications:
* $Log: mcproto.h,v $
* Revision 1.1  2005-02-12 14:37:14  anderson
* Initial revision
*
* Revision 8.0  1998/12/23 23:24:16  mar
* Branch point for Release 5.0.2
*
* Revision 7.0  1998/10/30 22:42:26  mar
* Branch point for Release 5.0.2b1
*
* Revision 6.0  1998/03/02 05:16:42  tbr
* Branch point for Release 5.0.1
*
* Revision 5.0  1998/01/26 03:13:15  tbr
* Branch point for Release 5.0.1b1
*
* Revision 4.0  1995/12/15 08:41:25  tbr
* Branch point for Release 5.0.0
*
* Revision 3.2  1995/12/15  00:38:14  andy
* Prepare for GA Release
*
*/

/*
Portions of this software are based on Xlib and X Protocol Test Suite.
We have used this material under the terms of its copyright, which grants
free use, subject to the conditions below.  Note however that those
portions of this software that are based on the original Test Suite have
been significantly revised and that all such revisions are copyright (c)
1995 Applied Testing and Technology, Inc.  Insomuch as the proprietary
revisions cannot be separated from the freely copyable material, the net
result is that use of this software is governed by the ApTest copyright.
*/


void mcstart(char *buf);
void mcend(char *buf);
void mccopyright(FILE *fp, char *buf);
void mcheader(FILE *fp, char *buf);
void defargnames(void);
void mcassertion(FILE *fp, char *buf);
int assertfill(FILE *fp, char *buf, FILE *outfp, const char *prefix);
int joinpunct(int  c);
void mcstrategy(FILE *fp, char *buf);
void mccode(FILE *fp, char *buf);
void mcexterncode(FILE *fp, char *buf);
void funcstart(void);
void funcend(void);
void doxcall(FILE *fp, char *buf);
void mcdefassertion(FILE *fp, char *buf);
void mcincstart(char *buf);
void mcincend(char *buf);
int hashcmd(const char *buf);
int doif(const char *buf);
int doelse(void);
int doendif(void);
void defargtype(const char *name, int  num);
void errtext(char *buf);
void valerror(char *buf);
void valerrdefs(void);
int erralternates(char *out);
void errcode(char *bp);
void mepcopyright(FILE *fp, char *buf);
void mepecho(FILE *fp, char *buf);
void mepstart(char *buf);
void mepend(char *buf);
void mepset(char *buf);
void mepcomment(char *buf);
FILE *nextfile(struct mclist *sources);
void outcopy(const char *file);
FILE *cretmpfile(const char *file, char **crefile);
void outfile(FILE *fp);
void remfiles(void);
void includefile(char *file, char *bp);
void filetemp(char *name);
char *mcpath(const char *file);
void gccomps(FILE *fp, char *buf);
void macopyright(FILE *fp, char *buf);
void maheader(FILE *fp, char *buf);
void maassertion(FILE *fp, char *buf);
void madefassertion(FILE *fp, char *buf);
void mastart(char *buf);
void maend(char *buf);
void macomment(char *buf);
int main(int  argc, char **argv);
char *newline(FILE *fp, char *buf);
void putbackline(char *line);
void expandxname(char *line);
void err(const char *mess);
int errexit(void);
#define mcstrdup(s) ( (s) != NULL ? strdup(s) : NULL )
char *strinstr(char *s1, const char *s2);
int isassertwanted(int  a);
void mmstart(char *buf);
void mmend(char *buf);
void mmcopyright(FILE *fp, char *buf);
void mmheader(FILE *fp, char *buf);
void mmmake(FILE *fp, char *buf);
void mmcfiles(FILE *fp, char *buf);
void mmincstart(char *name);
struct	mclist *createmclist(void);
struct	mclist *addmclist(struct mclist *list, char *string);
char *getmclistitem(struct mclist *list, int  n);
void mascopyright(FILE *fp, char *buf);
void masheader(FILE *fp, char *buf);
void masassertion(FILE *fp, char *buf);
void masstrategy(FILE *fp, char *buf);
void masdefassertion(FILE *fp, char *buf);
void masstart(char *buf);
void masend(char *buf);
void dosections(FILE *fp, char *buf);
void assertion(FILE *fp, char *buf);
void do1sec(FILE *fp, char *buf, int  sec);
void dohook(char *buf, int  hook);
void skip(FILE *fp, char *buf);
void echo(FILE *fp, char *buf, FILE *fpout);
void echon(FILE *fp, char *buf, FILE *fpout);
void dodefaults(char *buf);
void setcmd(char *bp);
char *name12(const char *inname);
char *name12lc(const char *name);
char *name10(const char *name);
char *name10lc(const char *name);
int main(int  argc, char **argv);



