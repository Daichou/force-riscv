//
// Copyright (C) [2020] Futurewei Technologies, Inc.
//
// FORCE-RISCV is licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR
// FIT FOR A PARTICULAR PURPOSE.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef Force_PteAttributeRISCV_H
#define Force_PteAttributeRISCV_H

#include <PteAttribute.h>

namespace Force {

  /*!
    \class ValidPteAttributeRISCV
    \brief pte attribute to manage the valid bit and corresponding fault behavior
  */
  class ValidPteAttributeRISCV : public ValuePteAttribute
  {
  public:
    Object* Clone() const override { return new ValidPteAttributeRISCV(*this); } //!< Return a cloned ValidPteAttributeRISCV object of the same type and same contents of the object.
    const char* Type() const override { return "ValidPteAttributeRISCV"; } //!< Return the type of the ValidPteAttributeRISCV object.

    ValidPteAttributeRISCV() : ValuePteAttribute() { } //!< Constructor.
    ~ValidPteAttributeRISCV() { } //!< Destructor.

    void Generate(const GenPageRequest& rPagingReq, const VmAddressSpace& rVmas, PageTableEntry& rPte) override; //!< Generate ValidPteAttributeRISCV details.
  protected:
    ValidPteAttributeRISCV(const ValidPteAttributeRISCV& rOther) : ValuePteAttribute(rOther) { } //!< Copy constructor.
  };

  /*!
    \class AddressPteAttributeRISCV
    \brief pte attribute to manage address and corresponding fault behavior
  */
  class AddressPteAttributeRISCV : public AddressPteAttribute
  {
  public:
    Object* Clone() const override { return new AddressPteAttributeRISCV(*this); } //!< Return a cloned ValidPteAttributeRISCV object of the same type and same contents of the object.
    const char* Type() const override { return "AddressPteAttributeRISCV"; } //!< Return the type of the ValidPteAttributeRISCV object.

    AddressPteAttributeRISCV() : AddressPteAttribute() { } //!< Constructor.
    ~AddressPteAttributeRISCV() { } //!< Destructor.

    void Generate(const GenPageRequest& rPagingReq, const VmAddressSpace& rVmas, PageTableEntry& rPte) override; //!< Generate AddressPteAttributeRISCV details.
  protected:
    AddressPteAttributeRISCV(const AddressPteAttributeRISCV& rOther) : AddressPteAttribute(rOther) { } //!< Copy constructor.
  };

  /*!
    \class DAPteAttributeRISCV
    \brief pte attribute to manage the 'DA' (Dirty/Access) bits and corresponding fault behavior
  */
  class DAPteAttributeRISCV : public PteAttribute
  {
  public:
    Object* Clone() const override { return new DAPteAttributeRISCV(*this); } //!< overridden method to clone WPteAttribute object
    const char* Type() const override { return "DAPteAttributeRISCV"; } //!< overridden method to return WPteAttribute as object type

    DAPteAttributeRISCV() : PteAttribute() { } //!< Constructor
    ~DAPteAttributeRISCV() { } //!< Destructor

    void Generate(const GenPageRequest& rPagingReq, const VmAddressSpace& rVmas, PageTableEntry& rPte) override; //!< Generate Writeable PTE attribute
  protected:
    DAPteAttributeRISCV(const DAPteAttributeRISCV& rOther) : PteAttribute(rOther) { } //!< Copy Constructor
  };

  /*!
    \class XPteAttributeRISCV
    \brief pte attribute to manage the 'X' (Executable) bit and corresponding fault behavior
  */
  class XPteAttributeRISCV : public PteAttribute
  {
  public:
    Object* Clone() const override { return new XPteAttributeRISCV(*this); } //!< overridden method to clone XPteAttribute object
    const char* Type() const override { return "XPteAttributeRISCV"; } //!< overridden method to return XPteAttribute as object type

    XPteAttributeRISCV() : PteAttribute() { } //!< Constructor
    ~XPteAttributeRISCV() { } //!< Destructor

    void Generate(const GenPageRequest& rPagingReq, const VmAddressSpace& rVmas, PageTableEntry& rPte) override; //!< Generate Executable PTE attribute
  protected:
    XPteAttributeRISCV(const XPteAttributeRISCV& rOther) : PteAttribute(rOther) { } //!< Copy Constructor
  };

  /*!
    \class WPteAttributeRISCV
    \brief pte attribute to manage the 'W' (Writeable) bit and corresponding fault behavior
  */
  class WPteAttributeRISCV : public PteAttribute
  {
  public:
    Object* Clone() const override { return new WPteAttributeRISCV(*this); } //!< overridden method to clone WPteAttribute object
    const char* Type() const override { return "WPteAttributeRISCV"; } //!< overridden method to return WPteAttribute as object type

    WPteAttributeRISCV() : PteAttribute() { } //!< Constructor
    ~WPteAttributeRISCV() { } //!< Destructor

    void Generate(const GenPageRequest& rPagingReq, const VmAddressSpace& rVmas, PageTableEntry& rPte) override; //!< Generate Writeable PTE attribute
  protected:
    WPteAttributeRISCV(const WPteAttributeRISCV& rOther) : PteAttribute(rOther) { } //!< Copy Constructor
  };

  /*!
    \class RPteAttributeRISCV
    \brief pte attribute to manage the 'R' (Readable) bit and corresponding fault behavior
  */
  class RPteAttributeRISCV : public PteAttribute
  {
  public:
    Object* Clone() const override { return new RPteAttributeRISCV(*this); } //!< overridden method to clone RPteAttribute object
    const char* Type() const override { return "RPteAttributeRISCV"; } //!< overridden method to return RPteAttribute as object type

    RPteAttributeRISCV() : PteAttribute() { } //!< Constructor
    ~RPteAttributeRISCV() { } //!< Destructor

    void Generate(const GenPageRequest& rPagingReq, const VmAddressSpace& rVmas, PageTableEntry& rPte) override; //!< Generate Readable PTE attribute
  protected:
    RPteAttributeRISCV(const RPteAttributeRISCV& rOther) : PteAttribute(rOther) { } //!< Copy Constructor
  };

  /*!
    \class UPteAttributeRISCV
    \brief pte attribute to manage the 'U' (User access) bit and corresponding fault behavior
  */
  class UPteAttributeRISCV : public ValuePteAttribute
  {
  public:
    Object* Clone() const override { return new UPteAttributeRISCV(*this); } //!< overridden method to clone UPteAttribute object
    const char* Type() const override { return "UPteAttributeRISCV"; } //!< overridden method to return UPteAttribute as object type

    UPteAttributeRISCV() : ValuePteAttribute() { } //!< Constructor
    ~UPteAttributeRISCV() { } //!< Destructor

    void Generate(const GenPageRequest& rPagingReq, const VmAddressSpace& rVmas, PageTableEntry& rPte) override; //!< Generate user access PTE attribute
  protected:
    UPteAttributeRISCV(const UPteAttributeRISCV& rOther) : ValuePteAttribute(rOther) { } //!< Copy Constructor
  };

}

#endif //Force_PteAttributeRISCV_H
