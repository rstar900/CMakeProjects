#ifndef DOG_H
#define DOG_H

class Dog 
{
    public:
        explicit Dog(std::string name_param);
        Dog() = default;
        ~Dog();

        std::string get_name() const;

        void set_name(const std::string& name_param);

        void print_info() const;

    private:
        std::string name {"Puffy"};


};

#endif //DOG_H