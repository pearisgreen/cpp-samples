/* Generated by re2c */

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycc1: goto yyc_c1;
	}
/* *********************************** */
yyc_c1:
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	{}
yy5:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 'b':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYCTXMARKER;
	{}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy9;
	case 'c':
		YYCTXMARKER = YYCURSOR;
		goto yy11;
	default:
		YYCTXMARKER = YYCURSOR;
		goto yy8;
	}
yy8:
	YYCURSOR = YYCTXMARKER;
	{}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy6;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy11;
	default:	goto yy8;
	}
}

