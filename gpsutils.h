/* gpsutils.h -- geodesy and time conversions */

extern time_t mkgmtime(register struct tm *);
extern double timestamp(void);
extern double iso8601_to_unix(char *);
extern char *unix_to_iso8601(double t, char *);
extern double gpstime_to_unix(int, double, int);
extern double earth_distance(double, double, double, double);
