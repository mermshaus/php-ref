/*
  +----------------------------------------------------------------------+
  | This file is part of the pinepain/php-ref PHP extension.            |
  |                                                                      |
  | Copyright (c) 2016 Bogdan Padalko <pinepain@gmail.com>            |
  |                                                                      |
  | Licensed under the MIT license: http://opensource.org/licenses/MIT   |
  |                                                                      |
  | For the full copyright and license information, please view the      |
  | LICENSE file that was distributed with this source or visit          |
  | http://opensource.org/licenses/MIT                                   |
  +----------------------------------------------------------------------+
*/

#ifndef PHP_REF_NOTIFIER_EXCEPTION_H
#define PHP_REF_NOTIFIER_EXCEPTION_H

#include "php.h"

#ifdef ZTS
#include "TSRM.h"
#endif

extern zend_class_entry *php_ref_notifier_exception_class_entry;

void php_ref_create_notifier_exception(zval *exception, const char *message, zval *thrown);

PHP_MINIT_FUNCTION(php_ref_notifier_exception);


#endif /* PHP_REF_NOTIFIER_EXCEPTION_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
