/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.server.common.property.env.gateway;

import com.fasterxml.jackson.annotation.JsonView;
import im.turms.common.constant.DeviceType;
import im.turms.server.common.property.metadata.annotation.Description;
import im.turms.server.common.property.metadata.view.MutablePropertiesView;
import lombok.Data;

import javax.validation.constraints.Min;
import java.util.Set;

import static im.turms.server.common.util.DeviceTypeUtil.BROWSER_SET;

/**
 * @author James Chen
 */
@Data
public class SessionProperties {

    @Description("Whether to use the operating system class as the device type instead of the agent class")
    private boolean useOperatingSystemClassAsDefaultDeviceType = false;

    @JsonView(MutablePropertiesView.class)
    @Description("A session will be closed if turms server doesn't receive any request (including heartbeat request) from the client during heartbeatTimeoutSeconds." +
            "References: https://mp.weixin.qq.com/s?__biz=MzAwNDY1ODY2OQ==&mid=207243549&idx=1&sn=4ebe4beb8123f1b5ab58810ac8bc5994&scene=0#rd")
    @Min(0)
    private int heartbeatTimeoutSeconds = 150;

    @JsonView(MutablePropertiesView.class)
    @Description("The minimum allowable interval of heartbeat update operations to avoid frequent updates")
    @Min(0)
    private int minimumUpdateHeartbeatIntervalSeconds = 150 / 10;

    @Description("Whether to enable to query the login failed reason")
    private boolean enableQueryLoginFailureReason = true;

    @Description("Whether to enable to query the disconnection reason")
    private boolean enableQueryDisconnectionReason = true;

    @Description("The degraded device types that need to query the reason for session disconnection")
    private Set<DeviceType> degradedDeviceTypesForDisconnectionReason = BROWSER_SET;

    @Description("The degraded device types that need to query the reason for login failure")
    private Set<DeviceType> degradedDeviceTypesForLoginFailureReason = BROWSER_SET;

    @JsonView(MutablePropertiesView.class)
    @Description("Whether to notify clients of the session information after connected with the server")
    private boolean notifyClientsOfSessionInfoAfterConnected = true;

    @JsonView(MutablePropertiesView.class)
    @Description("Whether to authenticate users when logging in." +
            "Note that user ID is always needed even if enableAuthentication is false")
    private boolean enableAuthentication = true;

    @Description("The life duration of each reason record for session disconnection")
    @Min(1)
    private int disconnectionReasonExpireAfter = 30;

    @Description("The life duration of each reason record for login failure")
    @Min(1)
    private int loginFailureReasonExpireAfter = 30;

    /**
     * If the turms server only receives heartbeat requests from the client during maxIdleTime,
     * the session will be closed when the session cleaner detects it.
     */
//    @JsonView(MutablePropertiesView.class)
//    private int idleHeartbeatTimeoutSeconds = 0;
}