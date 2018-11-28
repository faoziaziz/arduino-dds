
#ifndef gelombang_H
#define gelombang_H

class RegCon{
	public:
		int pinBlink=13;

	};

class bentuk{
	/*
		ini merupakan kelas untuk bentuk gelombang
	*/
	public:
		void sinus(byte alamatRegister, byte valRegister)
		{
			alamatRegister= 0b10101;
			nilaiRegister= 0b10101;

		}
		void cosinus(byte almRegister, byte valRegister)
		{
			alamatRegister= 0b10101;
			nilaiRegister= 0b10101;
		}

};
#endif
