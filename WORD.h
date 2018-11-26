#pragma once

class WORD
{
private:
	string word;
public:
	WORD();
	//WORD(int d);
    //WORD(const WORD &w);
	~WORD();
	void setword(string str);
	string getword() const;
    void change();
};
