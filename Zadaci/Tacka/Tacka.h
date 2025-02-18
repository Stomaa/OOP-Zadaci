#pragma once
class Tacka
{
private:
	float x;
	float y;

public:
	void postaviNa(float novoX, float novoY);
	void pomeriZa(float deltaX, float deltaY);
	
	float rastojanje(const Tacka& t); // ovde prosledjujemo tacku po referenci; bkv smo poslali objekat 't' koji ima neko x i y i s' tim cemo da izracunamo nove vrednosti

	float uzmiX() {

		return x;
	}
		
	inline float uzmiY();

};

float Tacka::uzmiY() {

	return y;
}
