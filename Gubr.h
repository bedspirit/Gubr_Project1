#pragma once
#ifndef GUBR_H_
#define GUBR_H_

#include <string>
#include <vector>

using namespace std;

int sizeVector();
void DatePlusDays(struct tm* date, int days);
void LoadGubr(string t_filename, int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport);
void LoadGubr(string t_filename, int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport, int t_dontLoadOne);
void LoadGubr(string t_filename, int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport, int t_dontLoadOne,int t_dontLoadTwo);
void LoadGubr(string t_filename, int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport, int t_dontLoadOne, int t_dontLoadTwo, int t_dontLoadThree);
void LoadGubr(string t_filename, int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport, int t_dontLoadOne, int t_dontLoadTwo, int t_dontLoadThree, int t_dontLoadFour);
void LoadGubr(string t_filename, int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport, int t_dontLoadOne, int t_dontLoadTwo, int t_dontLoadThree, int t_dontLoadFour, int t_dontLoadFive);
void SetGubrScript(int t_inHouse, int t_consol, int t_sevenEight, int t_otherImport);
void RemoveStore(int t_StoreNumber);
void RemoveDistro(int t_DistroNumber);
void SaveDataToFile();


#endif /* GUBR_H_ */