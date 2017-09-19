#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio{
	private:
		int hora;
		int minuto;
		int segundo;
	public:
		Relogio(int hora, int minuto, int segundo);
		void avancarHorario(int hora, int minuto, int segundo);

		void setHorario(int h, int m, int s);

		int getHora();
		int getMinuto();
		int getSegundo();
};


#endif // RELOGIO_H
