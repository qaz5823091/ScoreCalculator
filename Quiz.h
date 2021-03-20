#ifndef QUIZ_H
#define QUIZ_H

#include "Examination.h"

class Quiz : public Examination{
	private:
		double percent;

	public:
		Quiz();
		void setPercent(double);
		double getPercent();
};

#endif