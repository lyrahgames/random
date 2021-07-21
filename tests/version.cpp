import<iomanip>;
import<iostream>;

import lyrahgames.random;

using namespace std;
using namespace lyrahgames::random;

int main() {
  cout << left << setw(25) << "version::number"
       << " = " << right << setw(30) << version::number << '\n'
       << left << setw(25) << "version::string"
       << " = " << right << setw(30) << version::string << '\n'
       << left << setw(25) << "version::id"
       << " = " << right << setw(30) << version::id << '\n'
       << left << setw(25) << "version::full"
       << " = " << right << setw(30) << version::full << '\n'
       << left << setw(25) << "version::major"
       << " = " << right << setw(30) << version::major << '\n'
       << left << setw(25) << "version::minor"
       << " = " << right << setw(30) << version::minor << '\n'
       << left << setw(25) << "version::patch"
       << " = " << right << setw(30) << version::patch << '\n'
       << left << setw(25) << "version::pre_release"
       << " = " << right << setw(30) << version::pre_release << '\n'
       << left << setw(25) << "version::snapshot_sn"
       << " = " << right << setw(30) << version::snapshot_sn << '\n'
       << left << setw(25) << "version::snapshot_id"
       << " = " << right << setw(30) << version::snapshot_id << '\n';
}
