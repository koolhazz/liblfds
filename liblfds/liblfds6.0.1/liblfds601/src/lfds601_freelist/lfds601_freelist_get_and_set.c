#include "lfds601_freelist_internal.h"





/****************************************************************************/
void *lfds601_freelist_get_user_data_from_element( struct lfds601_freelist_element *fe, void **user_data )
{
  assert( fe != NULL );
  // TRD : user_data can be NULL

  if( user_data != NULL )
    *user_data = fe->user_data;

  return( fe->user_data );
}





/****************************************************************************/
void lfds601_freelist_set_user_data_in_element( struct lfds601_freelist_element *fe, void *user_data )
{
  assert( fe != NULL );
  // TRD : user_data can be NULL

  fe->user_data = user_data;

  return;
}

