/****************************************************************************
 * include/nuttx/rpmsg/rpmsg_port.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __INCLUDE_NUTTX_RPMSG_RPMSG_PORT_H
#define __INCLUDE_NUTTX_RPMSG_RPMSG_PORT_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include <stdint.h>

#ifdef CONFIG_RPMSG_PORT

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

struct rpmsg_port_config_s
{
  FAR const char *remotecpu;
  uint32_t       txnum;         /* Number of tx buffer. */
  uint32_t       rxnum;         /* Number of rx buffer. */
  uint32_t       txlen;         /* Length of a single tx buffer. */
  uint32_t       rxlen;         /* Length of a single rx buffer. */

  /* Pointer to whole tx/rx buffer, if it was null, transport layer will
   * alloc internal.
   */

  FAR void       *txbuf;
  FAR void       *rxbuf;
};

#endif /* CONFIG_RPMSG_PORT */
#endif /* __INCLUDE_NUTTX_RPMSG_RPMSG_PORT_H */
