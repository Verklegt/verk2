#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H

#include <vector>
#include <string>

#include "models/scientist.h"

#include <QCoreApplication>
#include <QtSql>
#include "string"
#include <iostream>
#include <QString>


/**
 * @brief The ScientistRepository class handles reading and writing scientists to and from a file
 */
class ScientistRepository
{
public:
    ScientistRepository();
    void openDatabase();

    /**
     * @brief getAllScientists fetches all scientists from the data file
     * @return a vector containing all scientists in the data file
     */
    std::vector<Scientist> getAllScientists();

    /**
     * @brief searchForScientists fetches all scientists from file and filters them on searchTerm
     * @param searchTerm Contains the input that the user wishes to filter on
     * @return a vector of scientists filtered by searchTerm
     */
    std::vector<Scientist> searchForScientists(std::string searchTerm);

    /**
     * @brief addScientist saves a scientist model to a file
     * @param scientist The model to save
     * @return true if it was a success, false if it was a failure
     */
    bool addScientist(Scientist scientist);

private:
    std::string fileName;
};

#endif // SCIENTISTREPOSITORY_H
