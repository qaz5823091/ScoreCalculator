#ifndef MIDTERMEXAM_H
#define MIDTERMEXAM_H

#include "Examination.h"

class MidtermExam: public Examination {
	private:
		double percent;
	
	public:
		MidtermExam();
		void setPercent(double );
		double getPercent();
};

#endif