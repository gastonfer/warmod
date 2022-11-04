#if defined uts
  #endinput
#endif
#define uts
 
/**
 * Devuelve los nombes de los capitanes de ambos equipos
 *
 * @param TRCap    Variable por referencia que tomara el ID del capitan del equipo Terrorista
 * @param CTCap    Variable por referencia que tomara el ID del capitan del equipo Anti-Terrorista
 * @return        bool Un bool indicando si se pudo obtener ambos ID's con exito o no
 */
native bool GetTeamCaptains(int &TRCap, int &CTCap);