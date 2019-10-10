class Token{
	public:
		Token() : tok(INT), ival{0} {}
		Token(const Token& t) : tok(t.tok) {copyUnnion(t);}
		Token &operator=(const Token&);
		~Token() {if(tok == STR) sval.~string();}
		Token &operator=(const std::string&);
		Token& operator=(char);
		Token& operator=(int);
		Token &operator=(double);
	private:
		enum{INT, CHAR, DEL, STR} tok;
		union{
			char cval;
			int ival;
			double dval;
			std::string svl;
		};
		void copyUnion(cosnt Token&);

};
void Token::copyUnion(const Token& t)
{
	switch(t.tok)
	{
		case Token::INT: ival = t.ival ; break;
		case Token::CHAR: cval = t.val; break;
		case Token::DBL: dval = t.dval; break;
		case Token::STR: new(&sval) string(t.val); break;
	}
}

Token& Token::operator=(const Token& t)
{
	if(tok == STR&& t.tok !=STR) sval.~string();
	if(tok == STR&& t.tok == STR)
		sval = t.sval;
	else
		copyUnion(t);
	tok = t.tok;
	return *this;
}

Token &Token::operator=(int i)
{
	if(tok == STR) sval.~string();
	ival = i;
	tok = INT;
	return *this;
}

Token& Token::operator=(cosnt std::string &s)
{
	if(tok == STR)
	{
		sval = s;
	}else
	{
		new(&sval) string(s);
	}
	tok = STR;
	return *this;
}

int main()
{
	;
}
