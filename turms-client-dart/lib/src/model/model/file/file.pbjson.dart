///
//  Generated code. Do not modify.
//  source: model/file/file.proto
//
// @dart = 2.12
// ignore_for_file: annotate_overrides,camel_case_types,unnecessary_const,non_constant_identifier_names,library_prefixes,unused_import,unused_shown_name,return_of_invalid_type,unnecessary_this,prefer_final_fields,deprecated_member_use_from_same_package

import 'dart:core' as $core;
import 'dart:convert' as $convert;
import 'dart:typed_data' as $typed_data;
@$core.Deprecated('Use fileDescriptor instead')
const File$json = const {
  '1': 'File',
  '2': const [
    const {'1': 'description', '3': 1, '4': 1, '5': 11, '6': '.im.turms.proto.File.Description', '9': 0, '10': 'description', '17': true},
    const {'1': 'data', '3': 2, '4': 1, '5': 12, '9': 1, '10': 'data', '17': true},
  ],
  '3': const [File_Description$json],
  '8': const [
    const {'1': '_description'},
    const {'1': '_data'},
  ],
};

@$core.Deprecated('Use fileDescriptor instead')
const File_Description$json = const {
  '1': 'Description',
  '2': const [
    const {'1': 'url', '3': 1, '4': 1, '5': 9, '10': 'url'},
    const {'1': 'size', '3': 2, '4': 1, '5': 5, '9': 0, '10': 'size', '17': true},
    const {'1': 'format', '3': 3, '4': 1, '5': 9, '9': 1, '10': 'format', '17': true},
  ],
  '8': const [
    const {'1': '_size'},
    const {'1': '_format'},
  ],
};

/// Descriptor for `File`. Decode as a `google.protobuf.DescriptorProto`.
final $typed_data.Uint8List fileDescriptor = $convert.base64Decode('CgRGaWxlEkcKC2Rlc2NyaXB0aW9uGAEgASgLMiAuaW0udHVybXMucHJvdG8uRmlsZS5EZXNjcmlwdGlvbkgAUgtkZXNjcmlwdGlvbogBARIXCgRkYXRhGAIgASgMSAFSBGRhdGGIAQEaaQoLRGVzY3JpcHRpb24SEAoDdXJsGAEgASgJUgN1cmwSFwoEc2l6ZRgCIAEoBUgAUgRzaXpliAEBEhsKBmZvcm1hdBgDIAEoCUgBUgZmb3JtYXSIAQFCBwoFX3NpemVCCQoHX2Zvcm1hdEIOCgxfZGVzY3JpcHRpb25CBwoFX2RhdGE=');