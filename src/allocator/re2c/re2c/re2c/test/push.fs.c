/* Generated by re2c */
#line 1 "push.fs.re"
uint32_t push()
{
    // The scanner starts here
    #define YYLIMIT         limit
    #define YYCURSOR        cursor
    #define YYMARKER        marker
    #define YYCTYPE         uint8_t

    #define SKIP(x)         { start = cursor; goto yy0; }
    #define SEND(x)         { send(x); SKIP();          }
    #define YYFILL(n)       { goto fill;                }

    #define YYGETSTATE()    state
    #define YYSETSTATE(x)   { state = (x);  }

start:

    
#line 22 "push.fs.c"

	switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	case 1: goto yyFillLabel1;
	case 2: goto yyFillLabel2;
	}
yy0:
	YYSETSTATE(0);
	if ((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
yyFillLabel0:
	yych = *YYCURSOR;
	if (yych <= '=') {
		if (yych <= '(') {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy2;
				if (yych <= 0x08) goto yy4;
				if (yych <= '\t') goto yy6;
				goto yy8;
			} else {
				if (yych <= 0x1F) {
					if (yych <= '\r') goto yy6;
					goto yy4;
				} else {
					if (yych <= ' ') goto yy6;
					if (yych <= '\'') goto yy4;
					goto yy10;
				}
			}
		} else {
			if (yych <= '-') {
				if (yych <= '*') {
					if (yych <= ')') goto yy12;
					goto yy14;
				} else {
					if (yych <= '+') goto yy16;
					if (yych <= ',') goto yy4;
					goto yy18;
				}
			} else {
				if (yych <= '/') {
					if (yych <= '.') goto yy4;
					goto yy20;
				} else {
					if (yych <= '9') goto yy22;
					if (yych <= '<') goto yy4;
					goto yy25;
				}
			}
		}
	} else {
		if (yych <= 'e') {
			if (yych <= '_') {
				if (yych <= '@') goto yy4;
				if (yych <= 'Z') goto yy27;
				if (yych <= '^') goto yy4;
				goto yy27;
			} else {
				if (yych <= 'a') {
					if (yych <= '`') goto yy4;
					goto yy27;
				} else {
					if (yych <= 'b') goto yy30;
					if (yych <= 'd') goto yy27;
					goto yy31;
				}
			}
		} else {
			if (yych <= 'q') {
				if (yych <= 'g') {
					if (yych <= 'f') goto yy32;
					goto yy33;
				} else {
					if (yych == 'i') goto yy34;
					goto yy27;
				}
			} else {
				if (yych <= 'v') {
					if (yych <= 'r') goto yy35;
					goto yy27;
				} else {
					if (yych <= 'w') goto yy36;
					if (yych <= 'z') goto yy27;
					goto yy4;
				}
			}
		}
	}
yy2:
	++YYCURSOR;
#line 48 "push.fs.re"
	{ send(kEOF); return 1;  }
#line 115 "push.fs.c"
yy4:
	++YYCURSOR;
#line 49 "push.fs.re"
	{ SEND(kUnknown);        }
#line 120 "push.fs.c"
yy6:
	++YYCURSOR;
#line 47 "push.fs.re"
	{ SKIP();                }
#line 125 "push.fs.c"
yy8:
	++YYCURSOR;
#line 46 "push.fs.re"
	{ SKIP();                }
#line 130 "push.fs.c"
yy10:
	++YYCURSOR;
#line 39 "push.fs.re"
	{ SEND(kLeftParen);      }
#line 135 "push.fs.c"
yy12:
	++YYCURSOR;
#line 40 "push.fs.re"
	{ SEND(kRightParen);     }
#line 140 "push.fs.c"
yy14:
	++YYCURSOR;
#line 43 "push.fs.re"
	{ SEND(kStar);           }
#line 145 "push.fs.c"
yy16:
	++YYCURSOR;
#line 42 "push.fs.re"
	{ SEND(kPlus);           }
#line 150 "push.fs.c"
yy18:
	++YYCURSOR;
#line 41 "push.fs.re"
	{ SEND(kMinus);          }
#line 155 "push.fs.c"
yy20:
	++YYCURSOR;
#line 44 "push.fs.re"
	{ SEND(kSlash);          }
#line 160 "push.fs.c"
yy22:
	++YYCURSOR;
	YYSETSTATE(1);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel1:
	yych = *YYCURSOR;
	if (yych <= '/') goto yy24;
	if (yych <= '9') goto yy22;
yy24:
#line 36 "push.fs.re"
	{ SEND(kDecimalConstant);}
#line 172 "push.fs.c"
yy25:
	++YYCURSOR;
#line 38 "push.fs.re"
	{ SEND(kEqual);          }
#line 177 "push.fs.c"
yy27:
	++YYCURSOR;
	YYSETSTATE(2);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel2:
	yych = *YYCURSOR;
yy28:
	if (yych <= 'Z') {
		if (yych <= '/') goto yy29;
		if (yych <= '9') goto yy27;
		if (yych >= 'A') goto yy27;
	} else {
		if (yych <= '_') {
			if (yych >= '_') goto yy27;
		} else {
			if (yych <= '`') goto yy29;
			if (yych <= 'z') goto yy27;
		}
	}
yy29:
#line 35 "push.fs.re"
	{ SEND(kIdentifier);     }
#line 200 "push.fs.c"
yy30:
	yych = *++YYCURSOR;
	if (yych == 'r') goto yy37;
	goto yy28;
yy31:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy38;
	goto yy28;
yy32:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy39;
	goto yy28;
yy33:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy40;
	goto yy28;
yy34:
	yych = *++YYCURSOR;
	if (yych == 'f') goto yy41;
	goto yy28;
yy35:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy43;
	goto yy28;
yy36:
	yych = *++YYCURSOR;
	if (yych == 'h') goto yy44;
	goto yy28;
yy37:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy45;
	goto yy28;
yy38:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy46;
	goto yy28;
yy39:
	yych = *++YYCURSOR;
	if (yych == 'r') goto yy47;
	goto yy28;
yy40:
	yych = *++YYCURSOR;
	if (yych == 't') goto yy49;
	goto yy28;
yy41:
	yych = *++YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy42;
		if (yych <= '9') goto yy27;
		if (yych >= 'A') goto yy27;
	} else {
		if (yych <= '_') {
			if (yych >= '_') goto yy27;
		} else {
			if (yych <= '`') goto yy42;
			if (yych <= 'z') goto yy27;
		}
	}
yy42:
#line 28 "push.fs.re"
	{ SEND(kIf);             }
#line 262 "push.fs.c"
yy43:
	yych = *++YYCURSOR;
	if (yych == 't') goto yy50;
	goto yy28;
yy44:
	yych = *++YYCURSOR;
	if (yych == 'i') goto yy51;
	goto yy28;
yy45:
	yych = *++YYCURSOR;
	if (yych == 'a') goto yy52;
	goto yy28;
yy46:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy53;
	goto yy28;
yy47:
	yych = *++YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy48;
		if (yych <= '9') goto yy27;
		if (yych >= 'A') goto yy27;
	} else {
		if (yych <= '_') {
			if (yych >= '_') goto yy27;
		} else {
			if (yych <= '`') goto yy48;
			if (yych <= 'z') goto yy27;
		}
	}
yy48:
#line 29 "push.fs.re"
	{ SEND(kFor);            }
#line 296 "push.fs.c"
yy49:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy55;
	goto yy28;
yy50:
	yych = *++YYCURSOR;
	if (yych == 'u') goto yy57;
	goto yy28;
yy51:
	yych = *++YYCURSOR;
	if (yych == 'l') goto yy58;
	goto yy28;
yy52:
	yych = *++YYCURSOR;
	if (yych == 'k') goto yy59;
	goto yy28;
yy53:
	yych = *++YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy54;
		if (yych <= '9') goto yy27;
		if (yych >= 'A') goto yy27;
	} else {
		if (yych <= '_') {
			if (yych >= '_') goto yy27;
		} else {
			if (yych <= '`') goto yy54;
			if (yych <= 'z') goto yy27;
		}
	}
yy54:
#line 30 "push.fs.re"
	{ SEND(kElse);           }
#line 330 "push.fs.c"
yy55:
	yych = *++YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy56;
		if (yych <= '9') goto yy27;
		if (yych >= 'A') goto yy27;
	} else {
		if (yych <= '_') {
			if (yych >= '_') goto yy27;
		} else {
			if (yych <= '`') goto yy56;
			if (yych <= 'z') goto yy27;
		}
	}
yy56:
#line 31 "push.fs.re"
	{ SEND(kGoto);           }
#line 348 "push.fs.c"
yy57:
	yych = *++YYCURSOR;
	if (yych == 'r') goto yy61;
	goto yy28;
yy58:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy62;
	goto yy28;
yy59:
	yych = *++YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy60;
		if (yych <= '9') goto yy27;
		if (yych >= 'A') goto yy27;
	} else {
		if (yych <= '_') {
			if (yych >= '_') goto yy27;
		} else {
			if (yych <= '`') goto yy60;
			if (yych <= 'z') goto yy27;
		}
	}
yy60:
#line 32 "push.fs.re"
	{ SEND(kBreak);          }
#line 374 "push.fs.c"
yy61:
	yych = *++YYCURSOR;
	if (yych == 'n') goto yy64;
	goto yy28;
yy62:
	yych = *++YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy63;
		if (yych <= '9') goto yy27;
		if (yych >= 'A') goto yy27;
	} else {
		if (yych <= '_') {
			if (yych >= '_') goto yy27;
		} else {
			if (yych <= '`') goto yy63;
			if (yych <= 'z') goto yy27;
		}
	}
yy63:
#line 33 "push.fs.re"
	{ SEND(kWhile);          }
#line 396 "push.fs.c"
yy64:
	yych = *++YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy65;
		if (yych <= '9') goto yy27;
		if (yych >= 'A') goto yy27;
	} else {
		if (yych <= '_') {
			if (yych >= '_') goto yy27;
		} else {
			if (yych <= '`') goto yy65;
			if (yych <= 'z') goto yy27;
		}
	}
yy65:
#line 34 "push.fs.re"
	{ SEND(kReturn);         }
#line 414 "push.fs.c"
#line 50 "push.fs.re"


fill:
    return 0;
}
re2c: warning: line 26: column 18: escape has no effect: '\h' [-Wuseless-escape]
