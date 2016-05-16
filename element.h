#ifndef ELEMENT_H
#define ELEMENT_H

enum Direction {
    Input,
    Output,
    Bidirectional
};

enum ElementType {
    Dio_Input,
    Dio_Output,
    An_Input,
    An_Output
};

class Element
{
public:

    Element();
    ElementType type;

};

#endif // ELEMENT_H
