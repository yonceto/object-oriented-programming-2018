#pragma once

enum Languages {
	None,
	English,
	German,
	Polish,
	French,
	Spanish
};

class Secretary
{
public:
	Secretary();
	Secretary(int n, Languages* lan);
	~Secretary();

private:
	int m_numberOfLang;
	Languages* m_languages;
};

Secretary::Secretary()
{
	this->m_numberOfLang = 0;
	this->m_languages = new Languages[1];
	m_languages[0] = None;
}

Secretary::Secretary(int n, Languages* lan)
{
	this->m_numberOfLang = n;
	this->m_languages = new Languages[n];
	for (int i = 0; i < n; i++)
	{
		m_languages[i] = lan[i];
	}
}

Secretary::~Secretary()
{
	delete[] this->m_languages;
	this->m_numberOfLang = 0;
}