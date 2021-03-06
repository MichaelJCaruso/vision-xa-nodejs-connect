/*****  VA::PugiXML::Attribute Implementation  *****/

/************************
 ************************
 *****  Interfaces  *****
 ************************
 ************************/

/********************
 *****  System  *****
 ********************/

#include "Vk.h"

/******************
 *****  Self  *****
 ******************/

#include "va_pugixml_attribute.h"

/************************
 *****  Supporting  *****
 ************************/

#include "V_VString.h"
#include "Vxa_VCollectable.h"
#include "Vxa_VResultBuilder.h"


/************************************
 ************************************
 *****                          *****
 *****  VA::Pugixml::Attribute  *****
 *****                          *****
 ************************************
 ************************************/

/***************************
 ***************************
 *****  Run Time Type  *****
 ***************************
 ***************************/

DEFINE_CONCRETE_RTTLITE (VA::PugiXML::Attribute);

/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

VA::PugiXML::Attribute::Attribute (
    Node *pNode, pugi::xml_attribute const &rPugiAttribute
) : m_pNode (pNode), m_iPugiAttribute (rPugiAttribute) {
}

/************************************
 ************************************
 *****  Helper Implementations  *****
 ************************************
 ************************************/

void VA::PugiXML::Attribute::returnNonEmpty (Vxa::VResultBuilder &rRB, pugi::xml_attribute const &rPugiAttribute) {
    if (!rPugiAttribute.empty ())
	rRB = new Attribute (m_pNode, rPugiAttribute);
}


/************************************
 ************************************
 *****  Method Implementations  *****
 ************************************
 ************************************/

void VA::PugiXML::Attribute::getName (Vxa::VResultBuilder &rRB) {
    rRB = m_iPugiAttribute.name ();
}

void VA::PugiXML::Attribute::getValue (Vxa::VResultBuilder &rRB) {
    rRB = m_iPugiAttribute.value ();
}

void VA::PugiXML::Attribute::getNextSibling (Vxa::VResultBuilder &rRB) {
    returnNonEmpty (rRB, m_iPugiAttribute.next_attribute ());
}
void VA::PugiXML::Attribute::getPreviousSibling (Vxa::VResultBuilder &rRB) {
    returnNonEmpty (rRB, m_iPugiAttribute.previous_attribute ());
}

/***************************
 ***************************
 *****  Class Builder  *****
 ***************************
 ***************************/

VA::PugiXML::Attribute::ClassBuilder::ClassBuilder (Vxa::VClass *pClass) : Object::ClassBuilder (pClass) {
    defineMethod ("getName", &Attribute::getName);
    defineMethod ("getValue", &Attribute::getValue);

    defineMethod ("nextSibling", &Attribute::getNextSibling);
    defineMethod ("previousSibling", &Attribute::getPreviousSibling);
}

namespace {
    Vxa::VCollectable<VA::PugiXML::Attribute> g_iAttributeMeta;
}

DEFINE_VXA_COLLECTABLE(VA::PugiXML::Attribute);
