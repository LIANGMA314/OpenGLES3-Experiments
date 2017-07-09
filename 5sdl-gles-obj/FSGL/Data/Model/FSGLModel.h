/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FSEOGLModel.h
 * Author: demensdeum
 *
 * Created on July 8, 2017, 10:39 AM
 */

#ifndef FSEOGLMODEL_H
#define FSEOGLMODEL_H

#include <memory>

#include "../Faces/FSGLFaces.h"
#include "../Vertices/FSGLVertices.h"
#include "../Resource/FSGLResource.h"

using namespace std;

class FSGLModel: public FSGLResource {
    
public:
    FSGLModel();
    FSGLModel(const FSGLModel& orig);
    virtual ~FSGLModel();
    
private:

    unique_ptr<FSGLVertices> vertices;
    unique_ptr<FSGLFaces> faces;
};

#endif /* FSEOGLMODEL_H */

