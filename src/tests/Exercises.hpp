#pragma once

#include <iomanip>
#include <iostream>
#include <stdexcept>

namespace Tests
{

    /**
     * List 01, Exercise 01.
     */
    class Exercise01
    {

        public:

            /**
             *
             */
            float getDolars(float, float);

            /**
             *
             */
            void doExercise(void);
    };

    /**
     * List 01, Exercise 02.
     */
    class Exercise02
    {

        public:

            /**
             *
             */
            float celsiusToFarenheit(float);

            /**
             *
             */
            float celsiusToKelvin(float);

            /**
             *
             */
            void doExercise(void);
    };

    /**
     * List 01, Exercise03.
     */
    class Exercise03
    {

        private:

            /**
             *
             */
            float getDiscountBy(char, float);

            /**
             *
             */
            float getValue(void);

            /**
             *
             */
            char getSex(void);

        public:

            /**
             *
             */
            void doExercise(void);
    };
}