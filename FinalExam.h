#ifndef FinalExam_H
#define FinalExam_H

#include "Examination.h"
class FinalExam : public Examination{
  	private:
		double percent;
  	public:
		FinalExam();
		void setPercent(double);
		double getPercent();
};
#endif