#pragma once
class Mother
{
public:
	int publicv;
protected: // anything inside protected, friends , and base classes all have access to this protected
	int protectedv;
private:
	int privatev;
};

