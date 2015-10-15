/**
 * Licensed to JumpMind Inc under one or more contributor
 * license agreements.  See the NOTICE file distributed
 * with this work for additional information regarding
 * copyright ownership.  JumpMind Inc licenses this file
 * to you under the GNU General Public License, version 3.0 (GPLv3)
 * (the "License"); you may not use this file except in compliance
 * with the License.
 *
 * You should have received a copy of the GNU General Public License,
 * version 3.0 (GPLv3) along with this library; if not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#include "service/SequenceService.h"
#include "common/Log.h"

long SymSequenceService_nextVal(SymSequenceService *this, char * name) {
	SymLog_info("SymSequenceService_next_val");
    return 0;
}

long SymSequenceService_currVal(SymSequenceService *this, char * name) {
	SymLog_info("SymSequenceService_curr_val");
    return 0;
}

void SymSequenceService_init(SymSequenceService *this) {
	SymLog_info("SymSequenceService_init");
}

void SymSequenceService_destroy(SymSequenceService *this) {
    free(this);
}

SymSequenceService * SymSequenceService_new(SymSequenceService *this) {
    if (this == NULL) {
        this = (SymSequenceService *) calloc(1, sizeof(SymSequenceService));
    }

    this->nextVal = (void *) &SymSequenceService_nextVal;
    this->currVal = (void *) &SymSequenceService_currVal;
    this->init = (void *) &SymSequenceService_init;
    this->destroy = (void *) &SymSequenceService_destroy;
    return this;
}
