#include <iostream>
#include <string>

using namespace std;
class MasukUniversitas
{
public:
    int uangPendaftaran;
    int uangsemesester1;
    int uangbangunan;
    int totaluang;
    // isi daftar variable yang dibutuhkan di bawah ini
public:
    MasukUniversitas()
    {
        uangPendaftaran = 0;
        uangsemesester1 = 0;
        uangbangunan = 0;
        totaluang = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini
    }
    virtual void namaJalurMasuk() { return; }
    // isi disini dengan fungsi virtual yang dibutuhkan
    void setUangPendaftaran(int nilai)
    {
        this->uangPendaftaran = nilai;
    }
    void setUangSemester1(int nilai)
    {
        this->uangsemesester1 = nilai;
    }
    void setUangBangunan(int nilai)
    {
        this->uangbangunan = nilai;
    }
    float getUangPendaftaran()
    {
        return uangPendaftaran;
    }
    float getUangSemester1()
    {
        return uangsemesester1;
    }
    float getUangBangunan()
    {
        return uangbangunan;
    }
};

class SNBT : public MasukUniversitas
{
public:
    void namaJalurMasuk()
    {
        cout << "SNBT" << endl;
    }
};
class SNBP : public MasukUniversitas
{
public:
    void namaJalurMasuk()
    {
        cout << "SNBP" << endl;
    }
};
int main()
{
    char ch;
    SNBT q;
    SNBP p;
    

    while (1)
    {
        cout << "1. SNBT" << endl;
        cout << "2. SNBP" << endl;
        cout << "3. Exit" << endl;
        try
        {
            cout << "Enter your choice: ";
            cin >> ch;

            if (ch == '1')
            {
                cout << "masukan uang pendaftaran: ";
                int word;
                cin >> word;
                q.uangPendaftaran = (word);

                cout << "masukan uang semester 1: ";
                int word1;
                cin >> word1;
                q.uangsemesester1 = (word1);

                cout << "masukan uang bangunan: ";
                int word2;
                cin >> word2;
                q.uangbangunan = (word2);

                if ((q.uangPendaftaran + q.uangsemesester1 + q.uangbangunan) > 45000000)
                {
                    cout << "total harga:  " << (q.uangPendaftaran + q.uangsemesester1 + q.uangbangunan) << endl;
                    cout << "terlalu mahal" << endl;
                    cout << "tidak direkomendasikan" << endl;
                }
                else
                {
                    cout << "total harga:  " << (q.uangPendaftaran + q.uangsemesester1 + q.uangbangunan) << endl;
                    cout << "rekomendasi" << endl;
                }
            }
            else if (ch == '2')
            {
                cout << "masukan uang pendaftaran: ";
                int word;
                cin >> word;
                p.uangPendaftaran = (word);

                cout << "masukan uang semester 1: ";
                int word1;
                cin >> word1;
                p.uangsemesester1 = (word1);

                cout << "masukan uang bangunan: ";
                int word2;
                cin >> word2;
                p.uangbangunan = (word2);

                if ((p.uangPendaftaran + p.uangsemesester1 + p.uangbangunan) > 45000000)
                {
                    cout << "total harga: " << (q.uangPendaftaran + q.uangsemesester1 + q.uangbangunan) << endl;
                    cout << "terlalu mahal" << endl;
                    cout << "tidak direkomendasikan" << endl;
                }
                else
                {
                    cout << "total harga: " << (q.uangPendaftaran + q.uangsemesester1 + q.uangbangunan) << endl;
                    cout << "dipertimbangkan" << endl;
                    cout << "worth it" << endl;
                }
            }
            else if (ch == '3')
            {
                break;
            }
            else
            {
                throw "Invalid Choice";
            }
        }
        catch (exception &e)
        {
            cout << "check for values entered" << endl;
        }
    }
    return 0;
}