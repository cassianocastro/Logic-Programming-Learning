#pragma once

#include <iomanip>
#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

namespace Tests
{

    /**
     * List 01, Exercise 01
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
     * List 01, Exercise 02
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
     * List 01, Exercise03
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

    /**
     * List 01, Exercise04
     */
    class Exercise04
    {

        private:
            /**
             *
             */
            const std::map<std::string, float>* getDiscount(float);

            /**
             *
             */
            const std::map<std::string, float>* getAddition(float);

        public:

            /**
             *
             */
            void doExercise(void);
    };

    /**
     * List 01, Exercise05
     */
    class Exercise05
    {

        private:

            /**
             *
             */
            std::string getShift(int);

        public:

            /**
             *
             */
            void doExercise(void);
    };
}