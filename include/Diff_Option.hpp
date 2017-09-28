#ifndef DIFF_OPTION_H
#define DIFF_OPTION_H

class Diff_Option{
private:
  double step;
  double t_start;
  double t_end;
public:
  Diff_Option(double step,double t_start,double t_end);
  double getStep();
  double getTStart();
  double getTEnd();

  double setStep(double step);
  double setRange(double t_start,double t_end);
};

#endif
