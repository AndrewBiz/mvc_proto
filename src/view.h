/*
*/
#ifndef VIEW_H
#define VIEW_H

class Model;  // forward decraration

class View {
public:
    //virtual ~View();
    virtual void update(Model* theChangedModel) = 0;
protected:
    //View();
};

#endif
