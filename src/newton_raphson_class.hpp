#include <iostream>
#include <cmath>




class Newton_raphson
{
    public:
        double eps_;
        double current_eps_;
        unsigned long max_iter_;
        unsigned long iter_time_;
        double x = 0.;
        double fx = 0.;

        Newton_raphson()
        {
            ;
        }

        /// this constructor computes f(x) = x^0.5
        /// let x be 7
        Newton_raphson(double eps, unsigned long  max_iter) : eps_(0.001), max_iter_(10000), iter_time_(0)
        {
            double tmp = 0.0;
            const double input_value = 77;
            double target_value = input_value/20.;

            eps_ = eps;
            max_iter_ = max_iter;

            iter_time_ = 0;

            std:: cout << "max iter " << max_iter_ <<", eps set " << eps_ <<"\n";
            while ( iter_time_ < max_iter_)
            {
                tmp = target_value/2. + (input_value - 0)/(2. * target_value * target_value);

                // tmp = target_value / 2. + input_value / (2. * target_value);

                // fucking abs function, it outputs wrong logic if not include <cmath> file 
                // fuck abs(), let's enjoy fabs()!
                if (fabs(tmp - target_value) < eps_)
                {
                    std::cout << "eps done  iter_time_ " << iter_time_ << ", tmp " <<tmp << " target_value " << target_value << ", eps_ " << eps_ << "\n";
                    break;
                }
                    
                target_value = tmp;

                iter_time_++;
                
                

            }

            std:: cout << target_value << "," << iter_time_ << "\n";
            
        } 

}_;