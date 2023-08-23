
#ifndef PARTY_H
#define PARTY_H

#include <string>

/**
  * class Party
  * 
  */

class Party
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Party ();

  /**
   * Empty Destructor
   */
  virtual ~Party ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void setPresidentName ()
  {
  }


  /**
   * @return string
   */
  string getPresidentName ()
  {
  }


  /**
   */
  void setGovernorName ()
  {
  }


  /**
   * @return string
   */
  string getGovernorName ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string PartyName;
  string CandidateName;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of PartyName
   * @param new_var the new value of PartyName
   */
  void setPartyName (string new_var)   {
      PartyName = new_var;
  }

  /**
   * Get the value of PartyName
   * @return the value of PartyName
   */
  string getPartyName ()   {
    return PartyName;
  }

  /**
   * Set the value of CandidateName
   * @param new_var the new value of CandidateName
   */
  void setCandidateName (string new_var)   {
      CandidateName = new_var;
  }

  /**
   * Get the value of CandidateName
   * @return the value of CandidateName
   */
  string getCandidateName ()   {
    return CandidateName;
  }
private:


  void initAttributes () ;

};

#endif // PARTY_H
