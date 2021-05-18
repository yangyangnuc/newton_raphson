#include <iostream>





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
            double N = 7;
            double x = N/2.;

            std:: cout << "max iter " << max_iter_ <<", eps set " << eps_ <<"\n";
            while ( iter_time_ < max_iter_)
            {
                tmp = x / 2. + N / (2. * x);

                if (abs(tmp - x) < eps)
                {
                    std::cout << "eps done  iter_time_ " << iter_time_ << "\n";
                    break;
                }
                    
                x = tmp;

                iter_time_++;
                
                

            }

            std:: cout << x << "," << iter_time_ << "\n";
            
        } 

}_;