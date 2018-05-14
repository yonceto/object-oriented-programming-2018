#pragma once
class CarNumber
{
public:
	CarNumber();
	CarNumber(const char* rhs);
	CarNumber(const CarNumber& rhs);
	CarNumber& operator=(const CarNumber& rhs);
	~CarNumber();

	bool isValid();
	void ShowRegion(const CarNumber num) const;
private:
	char* m_number;
};